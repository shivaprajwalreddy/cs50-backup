select count(title) from movies where id =
(
    select movie_id from ratings where rating = 10.0
);
