select title from movies join ratings where movies.id = ratings.movie_id where id in
(
    select movie_id from stars where person_id in
    (
        select id from people where name = 'Chanwick Boseman'
    )
)
order by ratings.rating desc limit 5;
