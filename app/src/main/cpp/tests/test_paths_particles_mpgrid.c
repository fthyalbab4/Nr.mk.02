/* Ported from keep-review feature/sync-external-repos-gm82 */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "gm82_path.h"
#include "gm82_mp_grid.h"

static void test_paths(void) {
    gm82_path_list plist;
    gm82_path_list_init(&plist);
    assert(plist.count == 0);
    int pidx = gm82_path_add(&plist, "path_patrol", 0);
    assert(pidx == 0);
    gm82_path_add_point(&plist, pidx, 0.0, 0.0, 1.0);
    gm82_path_add_point(&plist, pidx, 100.0, 0.0, 1.0);
    assert(plist.items[pidx].count >= 2);
    printf("  paths OK\n");
}

int main(void) {
    printf("--- paths/mp_grid port smoke ---\n");
    test_paths();
    printf("PATHS_PARTICLES_MPGRID_PORT_OK\n");
    return 0;
}
