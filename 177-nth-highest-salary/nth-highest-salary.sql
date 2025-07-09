CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
    DECLARE val INT ;
    SET val= N - 1;
  RETURN (
      # Write your MySQL query statement below.
      select distinct salary as getNthHighestSalary from Employee
      order by salary desc
      LIMIT 1
      OFFSET val

  );
END