// Book My Show

/*
1.list cities where cienema are locaed
2.cinema can have mtiple audi can run one move show at a time
3.each movie can have utiple shows
4.customers can search by title,language,release date,city name
5.customer selects a moview display cinemas running that movie abd available shows
show at a particular cinema
seating arrangemebt i cinemal hall
slect mutiple seats accrong to pref
customers can distinguish between the availale seats and booked once
*/



public class BMSService{

List<CinemaHalls>cinema;

public List<Movie> getMovies(Date date,String city);
public List<CienamaHalls> getCinemaHalls(String city);

}


public class CinemaHalls{

int cinemaHallId;
String cinemaHallName;

Address address;

List<Audi>audiList;

public Map<Date,Movies> getMovies(List<Date>dateList);
public Map<Date,Show> getShows(List<Date>dateList);




}

public class Address{
    int pinCode;
    String street;
    String city;
    String state;
    String country;
}

public class Audi{
    
    int audiId;
    String audiName;
    List<Shows> shows;
    int totalSeats;
}

public class Show{
    int showId;
    Movie movie;
    Date startTime;
    Date endTime;
    CinemaHall cinemaHall;

    List<Seat>seats;
}

public class Seat{
    int seatId;
    SeatType seatType;
    SeatStatus seatStatus;
    Double price;
}

public enum SeatType{

    DELUX,VIP,ECONOMY,OTHER

}


public enum SeatStstus{
    BOOKED,AVAILABLE,RESERVED,NOT_AVAILABLE
}

public class Movie{
    String movieName;
    int movieId;
    int durationTime;
    String language;
    Genre genre;
    Date releaseDate;
    Map<String,List<Show>>cityShowMap;


}


public enum Genre{
    SCI_FI,DRAMA,ROM_COM,FANTASY
}



public class User{
    int userId;
    Search searchOb;


}

public class SystemMember extends User{

    Account account;
    String name;
    String email;
    Address address;

}

public  Member extends SystemMember{
    public Booking makeBooking(Booking booking);

    public List<Booking> getBooking();


}

public Admin extends SystemMember{

    public Boolean addMovie(Movie movie);
    public Boolean addShow(Show show);




}

public class Account{
    String userName;
    String password;
}

public class Search{


    public boolean List<Movie> selectMoviesByName(String name);
    public boolean List<Movie> selectMoviesByGenre(Genre genre);
    public boolean List<Movie> searchMoviesByLanguage(String language);
    public boolean List<Movie> searchMoviesByDate(Date releaseDate);


}

public class Booking{

string bookingId;
Date bookingDate;
Member member;
Show show;
Audi audi;
BookingStatus bookkingStatus;

double totalAmount;
List<Seat> seats;
Payment payementObj;

public boolean makePayement(Payment payment);
 

}

public enum BookingStatus{
    REQUESTED,PENDING,CONFIRMED,CANCELLED;
}


public class Payment{


   double amount;
   Date paymentDate;
   int transactionId;
   PaymentStatus paymentStatus;

}

public enum PaymentStatus{
    UNPAID,
    PENDING,
    COMPLETED,
    DECLINED,
    CANCELLED,
    REFUNDED,
    
}