// rea decompile_all
// name: FUN_00441808
// address: 0x441808
// body: available
// range: 0x441808-0x44194e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x441833 (push 0x44194f followed by fs-segment stack chaining); handler 0x44194f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441808(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;

  puStack_24 = &stack0xfffffffc;
  local_10 = *(undefined4 *)(param_1 + 0x20);
  local_14 = *(undefined4 *)(param_1 + 0x28);
  puStack_28 = &LAB_0044194f;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  *(ushort *)(param_2 + 7) = *(ushort *)(param_2 + 7) | 4;
  local_c = param_2;
  local_8 = param_1;
  iVar2 = FUN_00446a40(param_2);
  if (-1 < iVar2 + -1) {
    iVar5 = 0;
    do {
      iVar3 = FUN_00446a14(local_c,iVar5);
      if ((*(byte *)(iVar3 + 0x24) & 4) != 0) {
        iVar3 = FUN_00446a14(local_c,iVar5);
        *(ushort *)(iVar3 + 0x1c) = *(ushort *)(iVar3 + 0x1c) | 4;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (*(int *)(local_8 + 0x30) != 0) {
    uVar4 = FUN_004417b8(local_c[2]);
    *(undefined4 *)(local_8 + 0x20) = uVar4;
  }
  if (*(short *)(local_8 + 0x42) != 0) {
    if (*(int *)(local_8 + 0x20) != 0) {
      cVar1 = FUN_004061f8(*(int *)(local_8 + 0x20),&PTR_FUN_00435a84);
      if (cVar1 == '\0') goto LAB_004418e7;
    }
    local_18 = *(undefined4 *)(local_8 + 0x20);
    (**(code **)(local_8 + 0x40))
              (*(undefined4 *)(local_8 + 0x44),local_8,local_c,local_8 + 0x28,&local_18,local_c[2]);
    *(undefined4 *)(local_8 + 0x20) = local_18;
  }
LAB_004418e7:
  (**(code **)(*local_c + 0x24))(local_c,local_8);
  *(ushort *)(local_c + 7) = *(ushort *)(local_c + 7) & 0xfffb;
  iVar2 = FUN_00446a40(local_c);
  if (-1 < iVar2 + -1) {
    iVar5 = 0;
    do {
      iVar3 = FUN_00446a14(local_c,iVar5);
      if ((*(byte *)(iVar3 + 0x24) & 4) != 0) {
        iVar3 = FUN_00446a14(local_c,iVar5);
        *(ushort *)(iVar3 + 0x1c) = *(ushort *)(iVar3 + 0x1c) & 0xfffb;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *in_FS_OFFSET = uStack_2c;
  *(undefined4 *)(local_8 + 0x20) = local_10;
  *(undefined4 *)(local_8 + 0x28) = local_14;
  return;
}
