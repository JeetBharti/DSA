select p.firstName, p.lastName, a.city, a.state
from Person p
Left Join Address a ON p.personId=a.personId; 