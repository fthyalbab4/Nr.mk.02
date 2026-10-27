// rea decompile_all
// name: FUN_005b35e4
// address: 0x5b35e4
// body: available
// range: 0x5b35e4-0x5b3792 inclusive
// range: 0x5b37aa-0x5b382b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b377b (push 0x5b3793 followed by fs-segment stack chaining); handler 0x5b3793 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005b35e4(int param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int local_20;
  char local_12;
  int local_10;

  uVar5 = 0;
  puStack_30 = (undefined1 *)0x5b35ff;
  FUN_005b32a4(param_1);
  if ((399 < param_3) && (param_3 < 0x21f)) {
    puStack_30 = (undefined1 *)0x5b361f;
    FUN_0052f024(param_2);
    puStack_30 = (undefined1 *)0x5b3627;
    FUN_0052f024(param_2);
    puStack_30 = (undefined1 *)0x5b362f;
    uVar5 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x20) = uVar5;
    puStack_30 = (undefined1 *)0x5b363d;
    uVar5 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x28) = uVar5;
    puStack_30 = (undefined1 *)0x5b364b;
    uVar5 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    puStack_30 = (undefined1 *)0x5b3659;
    uVar5 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    puStack_30 = (undefined1 *)0x5b3667;
    cVar2 = FUN_0052f114(param_2);
    local_12 = '\0';
    if (0x21d < param_3) {
      puStack_30 = (undefined1 *)0x5b367e;
      local_12 = FUN_0052f114(param_2);
      puStack_30 = (undefined1 *)0x5b3691;
      FUN_0052f114(param_2);
    }
    puStack_30 = (undefined1 *)0x5b3699;
    uVar5 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x1c) = uVar5;
    puStack_30 = (undefined1 *)0x5b36a7;
    cVar3 = FUN_0052f114(param_2);
    if (cVar3 == '\0') {
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x18) = 1;
    if (param_3 == 400) {
      puStack_30 = (undefined1 *)0x5b36de;
      FUN_0052f114(param_2);
    }
    if (param_3 < 0x21d) {
      puStack_30 = (undefined1 *)0x5b36ee;
      FUN_0052f114(param_2);
    }
    puStack_30 = (undefined1 *)0x5b36f6;
    uVar5 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 8) = uVar5;
    puStack_30 = (undefined1 *)0x5b3704;
    uVar5 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0xc) = uVar5;
    puStack_30 = (undefined1 *)0x5b3712;
    puStack_30 = (undefined1 *)FUN_0052f024(param_2);
    *(undefined1 **)(param_1 + 4) = puStack_30;
    puStack_34 = (undefined1 *)0x5b3731;
    FUN_00409be0(param_1 + 0x30,&DAT_005b2754,1);
    local_20 = *(int *)(param_1 + 4);
    if (-1 < local_20 + -1) {
      local_10 = 0;
      do {
        puStack_30 = (undefined1 *)0x5b3756;
        FUN_0052f024(param_2);
        puStack_30 = (undefined1 *)0x5b375e;
        uVar5 = FUN_0052f2e4(param_2);
        puStack_30 = (undefined1 *)0x5b376d;
        piVar4 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
        puStack_34 = &LAB_005b3793;
        uStack_38 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_38;
        puStack_30 = &stack0xfffffffc;
        (**(code **)(*piVar4 + 0x5c))(piVar4,uVar5);
        puVar1 = puStack_30;
        *in_FS_OFFSET = uStack_38;
        puStack_30 = (undefined1 *)0x5b37b2;
        FUN_00405a7c(uVar5,uStack_38,puVar1);
        if (piVar4 != (int *)0x0) {
          puStack_30 = (undefined1 *)0x5b37c2;
          FUN_00463dc0(piVar4,7);
          puStack_30 = (undefined1 *)0x5b37d1;
          uVar5 = FUN_00701d38(&DAT_00700d94,1,piVar4);
          *(undefined4 *)(*(int *)(param_1 + 0x30) + local_10 * 4) = uVar5;
        }
        puStack_30 = (undefined1 *)0x5b37e5;
        FUN_00405a7c(piVar4);
        if (cVar2 != '\0') {
          puStack_30 = (undefined1 *)0x5b37fe;
          FUN_005b0b70(*(undefined4 *)(*(int *)(param_1 + 0x30) + local_10 * 4),0);
        }
        if (local_12 != '\0') {
          puStack_30 = (undefined1 *)0x5b3815;
          FUN_005b0b94(*(undefined4 *)(*(int *)(param_1 + 0x30) + local_10 * 4));
        }
        local_10 = local_10 + 1;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
    uVar5 = 1;
  }
  return uVar5;
}
