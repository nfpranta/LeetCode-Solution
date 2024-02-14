CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
    BEGIN
    set N = N - 1;
RETURN(
    select distinct salary from Employee order by salary desc limit 1 offset N /* skip N rows and output from N+1 rows*/
);
END