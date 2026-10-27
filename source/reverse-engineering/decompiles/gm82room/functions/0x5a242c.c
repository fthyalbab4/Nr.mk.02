// rea decompile_all
// name: FUN_005a242c
// address: 0x5a242c
// body: available
// range: 0x5a242c-0x5a2732 inclusive
// range: 0x5a279f-0x5a27a5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a248b (push 0x5a2798 followed by fs-segment stack chaining); handler 0x5a2798 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a2499 (push 0x5a2761 followed by fs-segment stack chaining); handler 0x5a2761 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a25b3 (push 0x5a2750 followed by fs-segment stack chaining); handler 0x5a2750 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a269c (push 0x5a2733 followed by fs-segment stack chaining); handler 0x5a2733 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a242c(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  undefined4 uStack_348;
  undefined1 *puStack_344;
  undefined1 *puStack_340;
  undefined1 *puStack_33c;
  undefined1 *puStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined1 *puStack_328;
  undefined1 *puStack_324;
  undefined4 uStack_320;
  undefined *puStack_31c;
  undefined1 *puStack_318;
  undefined4 uStack_314;
  undefined1 *puStack_310;
  undefined1 *puStack_30c;
  undefined1 local_2fc [16];
  undefined4 local_2ec [53];
  undefined1 *local_218 [5];
  int local_204;
  undefined4 *local_1e4 [2];
  undefined1 **local_1dc;
  undefined4 local_1c8;
  uint local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  uint local_108;
  int *local_14;
  int local_10;
  uint local_c;
  int local_8;

  bVar7 = 0;
  puStack_30c = (undefined1 *)0x5a244d;
  local_8 = param_1;
  FUN_00404f38(local_2ec,0x2d8,0);
  ppuVar5 = &PTR_FUN_00686bd8;
  puVar6 = local_2ec;
  for (iVar3 = 0x35; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *ppuVar5;
    ppuVar5 = ppuVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  local_1e4[0] = local_2ec;
  puStack_30c = (undefined1 *)0x5a2480;
  FUN_005af860(local_1e4,0x3e,0x174);
  puStack_310 = &LAB_005a2798;
  uStack_314 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_314;
  puStack_31c = &DAT_005a2761;
  uStack_320 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_320;
  local_218[0] = &LAB_005a2070;
  local_204 = local_8;
  local_1dc = local_218;
  puStack_318 = &stack0xfffffffc;
  puStack_30c = &stack0xfffffffc;
  if (*(int *)(*(int *)(local_8 + 0x28) + 8) != 0) {
    puStack_324 = (undefined1 *)0x5a24cf;
    puStack_318 = &stack0xfffffffc;
    puStack_30c = &stack0xfffffffc;
    FUN_005a2ef4(local_8);
  }
  puStack_324 = (undefined1 *)0x5a24db;
  uVar2 = FUN_00405fac(&LAB_004319cc,1);
  *(undefined4 *)(*(int *)(local_8 + 0x28) + 8) = uVar2;
  puStack_324 = (undefined1 *)0x0;
  puStack_328 = (undefined1 *)0x0;
  uStack_32c = 0x5a24f1;
  FUN_0043c854(uVar2);
  puStack_324 = (undefined1 *)0x5a2505;
  FUN_005aec34(local_1e4,*(undefined4 *)(*(int *)(local_8 + 0x28) + 8));
  if (*(int **)(local_8 + 0x2c) != (int *)0x0) {
    puStack_324 = (undefined1 *)0x5a2516;
    iVar3 = (**(code **)(**(int **)(local_8 + 0x2c) + 0x30))();
    if (iVar3 != 0) {
      puStack_324 = (undefined1 *)0x5a2525;
      iVar3 = (**(code **)(**(int **)(local_8 + 0x2c) + 0x24))();
      if (iVar3 != 0) {
        puStack_324 = (undefined1 *)0x5a2546;
        local_1c8 = (**(code **)(**(int **)(local_8 + 0x2c) + 0x30))();
        puStack_324 = (undefined1 *)0x5a2557;
        uVar2 = (**(code **)(**(int **)(local_8 + 0x2c) + 0x30))();
        *(undefined4 *)(*(int *)(local_8 + 0x28) + 0x10) = uVar2;
        puStack_324 = (undefined1 *)0x5a256b;
        local_1c4 = (**(code **)(**(int **)(local_8 + 0x2c) + 0x24))();
        puStack_324 = (undefined1 *)0x5a257c;
        uVar2 = (**(code **)(**(int **)(local_8 + 0x2c) + 0x24))();
        iVar3 = *(int *)(local_8 + 0x28);
        *(undefined4 *)(iVar3 + 0xc) = uVar2;
        local_1c0 = 3;
        local_1bc = 2;
        puStack_324 = (undefined1 *)0x5a25a5;
        local_14 = (int *)FUN_00462804(&PTR_FUN_00458e94,CONCAT31((int3)((uint)iVar3 >> 8),1));
        puStack_328 = &LAB_005a2750;
        uStack_32c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_32c;
        uStack_330 = 0x5a25c4;
        puStack_324 = &stack0xfffffffc;
        (**(code **)(*local_14 + 8))(local_14,*(undefined4 *)(local_8 + 0x2c));
        uStack_330 = 0x5a25ce;
        FUN_00464480(local_14,6);
        uStack_330 = 0x5a25d9;
        FUN_005aee8c(local_1e4);
        uStack_330 = 0x5a25ee;
        FUN_005aed90(local_1e4,*(undefined1 *)(local_8 + 0x3f),0xffffffff);
        if (*(char *)(local_8 + 0x3d) != '\0') {
          *(undefined1 *)(*(int *)(local_8 + 0x28) + 0x14) = 1;
          uStack_330 = 0x5a2611;
          FUN_005af000(local_1e4,1);
        }
        if (*(char *)(local_8 + 0x41) != '\0') {
          uStack_330 = 0x5a2625;
          FUN_005af468(local_1e4);
        }
        uStack_330 = 0x5a262f;
        local_10 = FUN_004632a8(local_14,0);
        uStack_330 = 0x5a263f;
        iVar3 = FUN_004632a8(local_14,1);
        uVar4 = iVar3 - local_10;
        if (((int)uVar4 < 1) || ((uVar4 & 3) != 0)) {
          local_c = 1;
        }
        else {
          local_c = local_1c4;
        }
        uStack_330 = 0;
        uStack_334 = 0;
        puStack_338 = (undefined1 *)0x0;
        puStack_33c = local_2fc;
        puStack_340 = (undefined1 *)0x5a2677;
        FUN_00436ad0(0,0,0);
        puStack_338 = local_2fc;
        puStack_33c = (undefined1 *)0x0;
        puStack_340 = (undefined1 *)0x5a2691;
        FUN_00406268(local_8,local_8,0);
        puStack_344 = &LAB_005a2733;
        uStack_348 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_348;
        puStack_340 = &stack0xfffffffc;
        FUN_005af680(local_1e4,0xffffffff);
        while (local_108 < local_1c4) {
          iVar3 = FUN_005af6f4(local_1e4,&local_10,local_c);
          local_10 = local_10 + uVar4 * iVar3;
        }
        FUN_005af980(local_1e4);
        puVar1 = puStack_340;
        *in_FS_OFFSET = uStack_348;
        puStack_340 = &LAB_005a273a;
        puStack_344 = (undefined1 *)0x5a26f4;
        iVar3 = FUN_004043a8(0,uStack_348,puVar1);
        if (iVar3 == 0) {
          puStack_344 = (undefined1 *)0x64;
        }
        else {
          puStack_344 = (undefined1 *)0x0;
        }
        uStack_348 = 0;
        FUN_00436ad0(0,0,0,local_2fc,0);
        FUN_00406268(local_8,local_8,2,0,local_2fc);
        return;
      }
    }
  }
  puVar1 = puStack_318;
  *in_FS_OFFSET = uStack_320;
  puStack_318 = (undefined1 *)0x5a2536;
  FUN_00406ba8(0,uStack_320,puVar1);
  return;
}
