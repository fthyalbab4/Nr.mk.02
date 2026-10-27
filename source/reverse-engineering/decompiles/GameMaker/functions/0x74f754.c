// rea decompile_all
// name: FUN_0074f754
// address: 0x74f754
// body: available
// range: 0x74f754-0x74f8b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x74f770 (push 0x74f8b2 followed by fs-segment stack chaining); handler 0x74f8b2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074f754(void)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *in_FS_OFFSET;
  bool bVar7;
  int in_stack_00000004;
  undefined4 *puStack_2c;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  piVar6 = (int *)(in_stack_00000004 + -4);
  puStack_24 = &LAB_0074f8b2;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  FUN_00415a58(*piVar6,&local_8);
  FUN_00407f0c(piVar6,local_8);
  FUN_004173d8(*piVar6,&local_c);
  puStack_2c = (undefined4 *)0x74f7a2;
  cVar2 = FUN_007406c0(local_c,L".bpl",0);
  if (cVar2 != '\0') {
    FUN_007364b0(*piVar6,&local_10);
    puStack_2c = (undefined4 *)0x74f7be;
    FUN_00407f0c(piVar6,local_10);
    iVar3 = *piVar6;
    if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
      puStack_2c = (undefined4 *)0x74f7d8;
      iVar3 = FUN_00407048(piVar6,*piVar6);
    }
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4);
    }
    if (iVar4 == 5) {
      iVar3 = *piVar6;
      if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
        puStack_2c = (undefined4 *)0x74f800;
        iVar3 = FUN_00407048(piVar6,*piVar6);
      }
      bVar7 = (PTR_DAT_00782898[(uint)*(ushort *)(iVar3 + 6) * 2] & 4) != 0;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      iVar3 = *piVar6;
      if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
        puStack_2c = (undefined4 *)0x74f833;
        iVar3 = FUN_00407048(piVar6,*piVar6);
      }
      bVar7 = (PTR_DAT_00782898[(uint)*(ushort *)(iVar3 + 8) * 2] & 4) != 0;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      iVar3 = FUN_00408a68(&DAT_0074f8e8,*piVar6);
      if (iVar3 != 1) {
        puStack_2c = (undefined4 *)0x74f867;
        iVar3 = FUN_00408a68(&LAB_0074f8fc,*piVar6);
        if (iVar3 != 1) goto LAB_0074f897;
      }
      puStack_2c = &local_14;
      FUN_004086a8(*piVar6,4,2);
      uVar5 = FUN_0041693c(local_14,0);
      *(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0x80) = uVar5;
    }
  }
LAB_0074f897:
  puVar1 = puStack_24;
  *in_FS_OFFSET = (int)puStack_2c;
  puStack_24 = &LAB_0074f8b9;
  iStack_28 = 0x74f8b1;
  thunk_FUN_00406e80(&local_14,4,puVar1);
  return;
}
