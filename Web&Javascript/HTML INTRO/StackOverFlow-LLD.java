

// Req
/*
Any guest can search and view questions
Members can post new questions
Members can add answers to questions
Mwemberc can add comments to any question or answerrs
Memberc can upvote a question
members can flag a question for seriour problems
memebrs will earn badges
memebrc can vote to delete or close a question
moderators can close a question or undelete a deleted question

*/


// foremost thing lld is identify the low lvel esign actors

class User{

int guestId;
Search searchObj;

public List<Question> getQuestions(String searchString);

public Account createAccount();
/*

Dblayyer UserRepository extends CrudRepository<Long,User>();

UserSrvice Interface -> name createAccount -> UsersericeIMpl -> 
*/

}

class Member exrends User{


Account account;
List<Badge>badges;


public void addQuestion(Question question);

public void addComment(Entity entity,Comment comment);
// entiy could be qustion or eenoty could be answer enoty coutl commment

public void addAnswer(Question question,Answer answer);

public void vote(Entity entity,VoteType voteType);

public void addTag(Question question,Tag tag);

public void flag(Entity entity);

public List<Badges> getBadges();




}

class Account{
    String name;
    Address address;
    int accountId;

    String userName;
    String password;
    String email;

    AccountStatus accountStatus;

    int reputation;
}


class Address{

    String street;
    int pincode;
    String city;
    String State;
    String country;

}

class Moderator extends Member{

public Boolean closeQuestion(Question question);

public Boolean restoreQuestion(Question quesstion);

// [rivelages ->close a question restore a quesstion]

}

public enumm AccountStatus{
    ACTIVE,
    BLOCKED,
    CLOSED;
}


public enum VoteType{
    UPVOTE,DOWNVOTE,CLOSEVOTE,DELETEVOTE;
}

public class Badge{
    String name;
    String description;
}

public class Entity{

    int entitId;
    Member creator;
    Map<vVoteType,Integer>votes;
    Date createdDate;
    List<Commment>comments;

    public boolean flagEnity(Member member);
    public boolean voteEntity(VoteType voteType);
    public boolean addComment(Comment comment);


}

public class Comment extends Entity{


String message;


}


public class Question extends Entity{

List<EditHistory> editHistoryList;

List<Answer> answerList;

List<Tag> tags;

String title;

String description;

QuestionStatus status;


public boolean addQuestion();


public  boolean addTag(Tag tag);

}

public class Answer extends answer{

String answer;
Boolean isAccepted;
public boolean addAnswer(Question question);

}

public enum QuestionStatus{

    ACTIVE,BOUNTIED,CLOSED,FLAGGED
}


public class Tag{
    String name;
    String desctiption;
}

public class EditHistory{
    int editHistoryId;
    Member creator;
    Date date;
    Question prevQuestion;
    Question updatedQuestion;

}
/*
Nice Work !! 
Few suggestions : 
1. Users can be watching some entities and should be notified once any of the subscribed entities have any update. 
2. Observer design pattern seems to be a fit for user subscriptions and notifying users.
3. Can you please explain more the pattern behind keeping searchObj in User class. Say a system to system integration happens then will the calling client be invoking search on user obj ? 
4. Also any other design pattern fitting in the solution ?
*/