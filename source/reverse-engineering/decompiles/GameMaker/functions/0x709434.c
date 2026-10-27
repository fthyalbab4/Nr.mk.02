// rea decompile_all
// name: FUN_00709434
// address: 0x709434
// body: available
// range: 0x709434-0x70978e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x70944f (push 0x70978f followed by fs-segment stack chaining); handler 0x70978f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00709434(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_30 = &LAB_0070978f;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  iVar2 = FUN_0052f024(param_1);
  if (iVar2 < 800) {
    FUN_00708e84(param_1,iVar2);
  }
  else {
    uVar3 = FUN_0052f2e4(param_1);
    FUN_00708bd0();
    DAT_0077f514 = FUN_0052f114(uVar3);
    DAT_0077f518 = FUN_0052f114(uVar3);
    DAT_0077f51c = FUN_0052f114(uVar3);
    DAT_0077f520 = FUN_0052f114(uVar3);
    DAT_0077f524 = FUN_0052f024(uVar3);
    DAT_0077f528 = FUN_0052f114(uVar3);
    DAT_0077f52c = FUN_0052f114(uVar3);
    DAT_0077f530 = FUN_0052f024(uVar3);
    DAT_0077f534 = FUN_0052f114(uVar3);
    DAT_0077f538 = FUN_0052f024(uVar3);
    DAT_0077f53c = FUN_0052f024(uVar3);
    DAT_0077f540 = FUN_0052f024(uVar3);
    DAT_0077f544 = FUN_0052f114(uVar3);
    DAT_0077f54c = FUN_0052f024(uVar3);
    DAT_0077f550 = FUN_0052f114(uVar3);
    DAT_0077f554 = FUN_0052f114(uVar3);
    DAT_0077f558 = FUN_0052f114(uVar3);
    DAT_0077f55c = FUN_0052f114(uVar3);
    DAT_0077f560 = FUN_0052f114(uVar3);
    DAT_0077f564 = FUN_0052f114(uVar3);
    DAT_0077f568 = FUN_0052f114(uVar3);
    DAT_0077f56c = FUN_0052f024(uVar3);
    DAT_0077f548 = FUN_0052f114(uVar3);
    DAT_0077f570 = FUN_0052f024(uVar3);
    if (DAT_0077f570 == 2) {
      DAT_0077f580 = FUN_0052f40c(uVar3);
      DAT_0077f57c = FUN_0052f40c(uVar3);
    }
    DAT_0077f574 = FUN_0052f114(uVar3);
    if (DAT_0077f574 != '\0') {
      DAT_0077f578 = FUN_0052f40c(uVar3);
    }
    DAT_0077f584 = FUN_0052f114(uVar3);
    DAT_0077f588 = FUN_0052f024(uVar3);
    DAT_0077f58c = FUN_0052f114(uVar3);
    uVar4 = FUN_0052f258(uVar3);
    (**(code **)(*DAT_0077f590 + 0x5c))(DAT_0077f590,uVar4);
    FUN_00405a7c(uVar4);
    DAT_0077f594 = FUN_0052f114(uVar3);
    DAT_0077f598 = FUN_0052f114(uVar3);
    DAT_0077f59c = FUN_0052f114(uVar3);
    uVar5 = FUN_0052f024(uVar3);
    DAT_0077f5a0 = (uVar5 & 1) == 1;
    DAT_0077f5a4 = (uVar5 & 2) == 2;
    FUN_0052f060(uVar3,&local_8);
    FUN_00407eb8(&DAT_0077f5a8,local_8);
    FUN_0052f060(uVar3,&local_c);
    FUN_00407eb8(&PTR_LAB_0077f5ac,local_c);
    FUN_0052f038(uVar3);
    _DAT_0079081c = (double)in_ST0;
    FUN_0052f060(uVar3,&local_10);
    FUN_00407eb8(&DAT_0077f5b0,local_10);
    DAT_0077f5b4 = FUN_0052f024(uVar3);
    DAT_0077f5b8 = FUN_0052f024(uVar3);
    DAT_0077f5bc = FUN_0052f024(uVar3);
    DAT_0077f5c0 = FUN_0052f024(uVar3);
    FUN_0052f060(uVar3,&local_14);
    FUN_00407eb8(&DAT_0077f5c4,local_14);
    FUN_0052f060(uVar3,&local_18);
    FUN_00407eb8(&DAT_0077f5c8,local_18);
    FUN_0052f060(uVar3,&local_1c);
    FUN_00407eb8(&DAT_0077f5cc,local_1c);
    FUN_0052f060(uVar3,&local_20);
    FUN_00407eb8(&DAT_0077f5d0,local_20);
    FUN_0052f038(uVar3);
    _DAT_0079082c = (double)in_ST1;
    FUN_00405a7c(uVar3);
    DAT_00790824 = 0;
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00709796;
  puStack_30 = (undefined1 *)0x70978e;
  thunk_FUN_00406e80(&local_20,7,puVar1);
  return;
}
