select avg(energy)
from songs
where artist_id =
(
    select id
    from artists
    where name = 'Drake'
);
