/*
crickbizz system requirements
1.Keep track of all formats. ODI,TEST,T20
2.Keep track of all teams and matches
3.show ball by ball commentry
4.Team playing should announce squads
5. Team should announce playing 11
6.shoudl record stats of player
7.should show stats based on query
*/

/* Actors :- Admin, Commentator,Guest */

class User[

 

Search search;



]


class Admin extends User{

Account account;
public boolean addMatch(Match match);

public boolean addTeam(Team team);

public boolean addTournament(Tournament tournament);

}


public class Account{

String userName;
String password;

String email;
Address address;

}


public class Address{

int pincode;
String Street;
String city;
String State;
String country;

}


public class Search{

public boolean findMatchByTeam(String teamName);
public boolean findMatchByDate(Date date);
public boolean findStatsByTeam(String teamName);
public boolean findStatsByPlayer(String playerName);

public boolean findPlaying11(Tournament t);
}


class Coach{

Person p;

}

class Cricketer[

Person p;
List<Contracts>contracts;
}

class Umpire{

Persom p;
bool assignMatch(Match m);
}

class Refree{


}

class Team{
private String name;
private List<Cricketer>players;
private List<News>news;
private Coach coach;


public boolean addTournamentSquad(TournamnetSquad tournamentSquad);
public boolean addPlayer(Player p);
public boolean addNews(News news);

}


class TournamentSuqad{
    private List<Players>players;
    private List<TournamentStat> tounamentStats;

    public boolean addPlayer(Player p);
}

// 