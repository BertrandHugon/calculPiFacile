#!/usr/bin/perl -w

$VERSION = '1.00';

package calculPiFacile;

sub kalkulu {
	my ($n) = @_;
	my $kvadrato = $n * $n;
	my $sumo = 0;
	my $j = $n - 1;
	my $i = 1;
	while ($i < $n) {
		while ($i * $i + $j * $j > $kvadrato) {
			$j = $j - 1;
		}
		$sumo = $sumo + $j;
		$i = $i + 1;
	}
	return 4 * $sumo / $kvadrato;
}

