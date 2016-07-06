use Test::More;

use calculPiFacile;

ok(calculPiFacile::kalkulu (8000) < 3.142, 'borne supérieure');
ok(calculPiFacile::kalkulu (8000) > 3.141, 'borne inférieure');

done_testing();

