# Write your MySQL query statement below
SELECT firstname, lastname, city, state
FROM Person
LEFT JOIN address ON Person.personId =Address.personId;