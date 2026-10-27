// rea decompile_all
// name: FUN_0062e0a8
// address: 0x62e0a8
// body: available
// range: 0x62e0a8-0x62e1e9 inclusive
// range: 0x62e201-0x62e25d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62e1d2 (push 0x62e1ea followed by fs-segment stack chaining); handler 0x62e1ea lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0062e0a8(int param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  char local_e;

  uVar6 = 0;
  puStack_24 = (undefined1 *)0x62e0c2;
  FUN_0062dbe8(param_1);
  if ((399 < param_3) && (param_3 < 0x220)) {
    puStack_24 = (undefined1 *)0x62e0e1;
    FUN_0052f024(param_2);
    puStack_24 = (undefined1 *)0x62e0e8;
    FUN_0052f024(param_2);
    puStack_24 = (undefined1 *)0x62e0ef;
    cVar2 = FUN_0052f114(param_2);
    local_e = '\0';
    if (0x21d < param_3) {
      puStack_24 = (undefined1 *)0x62e105;
      local_e = FUN_0052f114(param_2);
      puStack_24 = (undefined1 *)0x62e117;
      FUN_0052f114(param_2);
    }
    if (param_3 == 400) {
      puStack_24 = (undefined1 *)0x62e126;
      FUN_0052f114(param_2);
    }
    if (param_3 < 0x21d) {
      puStack_24 = (undefined1 *)0x62e135;
      FUN_0052f114(param_2);
    }
    if (0x21e < param_3) {
      puStack_24 = (undefined1 *)0x62e144;
      uVar3 = FUN_0052f114(param_2);
      *(undefined1 *)(param_1 + 8) = uVar3;
      puStack_24 = (undefined1 *)0x62e151;
      uVar6 = FUN_0052f024(param_2);
      *(undefined4 *)(param_1 + 0xc) = uVar6;
      puStack_24 = (undefined1 *)0x62e15e;
      uVar6 = FUN_0052f024(param_2);
      *(undefined4 *)(param_1 + 0x10) = uVar6;
      puStack_24 = (undefined1 *)0x62e16b;
      uVar6 = FUN_0052f024(param_2);
      *(undefined4 *)(param_1 + 0x14) = uVar6;
      puStack_24 = (undefined1 *)0x62e178;
      uVar6 = FUN_0052f024(param_2);
      *(undefined4 *)(param_1 + 0x18) = uVar6;
      puStack_24 = (undefined1 *)0x62e185;
      uVar6 = FUN_0052f024(param_2);
      *(undefined4 *)(param_1 + 0x1c) = uVar6;
      puStack_24 = (undefined1 *)0x62e192;
      uVar6 = FUN_0052f024(param_2);
      *(undefined4 *)(param_1 + 0x20) = uVar6;
    }
    puStack_24 = (undefined1 *)0x62e19f;
    cVar4 = FUN_0052f114(param_2);
    if (cVar4 != '\0') {
      puStack_24 = (undefined1 *)0x62e1ae;
      FUN_0052f024(param_2);
      puStack_24 = (undefined1 *)0x62e1b5;
      uVar6 = FUN_0052f2e4(param_2);
      puStack_24 = (undefined1 *)0x62e1c4;
      piVar5 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
      puStack_28 = &LAB_0062e1ea;
      uStack_2c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_2c;
      puStack_24 = &stack0xfffffffc;
      (**(code **)(*piVar5 + 0x5c))(piVar5,uVar6);
      puVar1 = puStack_24;
      *in_FS_OFFSET = uStack_2c;
      puStack_24 = (undefined1 *)0x62e209;
      FUN_00405a7c(uVar6,uStack_2c,puVar1);
      if (piVar5 != (int *)0x0) {
        puStack_24 = (undefined1 *)0x62e219;
        FUN_00463dc0(piVar5,7);
        puStack_24 = (undefined1 *)0x62e227;
        FUN_00702324(*(undefined4 *)(param_1 + 4),piVar5);
      }
      puStack_24 = (undefined1 *)0x62e22f;
      FUN_00405a7c(piVar5);
    }
    if (cVar2 != '\0') {
      puStack_24 = (undefined1 *)0x62e242;
      FUN_005b0b70(*(undefined4 *)(param_1 + 4),0);
    }
    if (local_e != '\0') {
      puStack_24 = (undefined1 *)0x62e253;
      FUN_005b0b94(*(undefined4 *)(param_1 + 4));
    }
    uVar6 = 1;
  }
  return uVar6;
}
