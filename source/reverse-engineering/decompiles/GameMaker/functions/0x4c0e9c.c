// rea decompile_all
// name: FUN_004c0e9c
// address: 0x4c0e9c
// body: available
// range: 0x4c0e9c-0x4c0fef inclusive
// range: 0x4c0ff7-0x4c0ffd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c0f45 (push 0x4c0ff0 followed by fs-segment stack chaining); handler 0x4c0ff0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c0e9c(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  int *piStack_3c;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_1c [8];
  byte local_14;
  int *local_10;
  int *local_8;

  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    piStack_3c = (int *)local_1c;
    puStack_40 = (undefined1 *)0x4c0ec5;
    iVar3 = FUN_004c5060(param_1,0x417,param_2);
    if (iVar3 != 0) {
      local_8 = local_10;
      piStack_3c = (int *)0x4c0ee1;
      cVar2 = FUN_00405c98(local_10,&PTR_LAB_004a4a78);
      if ((cVar2 != '\x01') && (((local_14 & 8) == 0) != (bool)*(char *)((int)local_8 + 0x59))) {
        piStack_3c = (int *)0x4c0f03;
        FUN_004c17f8(param_1,param_2);
      }
      piStack_3c = &local_2c;
      puStack_40 = (undefined1 *)0x4c0f15;
      iVar3 = FUN_004efbd8(param_1,0x41d,param_2);
      if (iVar3 != 0) {
        piStack_3c = (int *)0x4c0f2b;
        FUN_00405c98(local_8,&PTR_LAB_004a4a78);
        if (cVar2 != '\0') {
          piStack_3c = (int *)0x4c0f3a;
          (**(code **)(*local_8 + 0xa4))();
        }
        puStack_40 = &LAB_004c0ff0;
        uStack_44 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_44;
        piStack_3c = (int *)&stack0xfffffffc;
        cVar2 = FUN_00405c98(local_8,&PTR_LAB_004a4a78);
        if (cVar2 == '\x01') {
          FUN_004edf50(local_8,&local_2c);
        }
        else {
          cVar2 = FUN_00405c98(local_8,&PTR_LAB_004e61b8);
          if (cVar2 != '\0') {
            FUN_004f7684(param_1);
          }
          FUN_004edf50(local_8,&local_2c);
          iVar3 = local_8[0x13];
          if (iVar3 < local_20 - local_28) {
            uVar4 = (local_20 - local_28) - iVar3;
            iVar5 = (int)uVar4 >> 1;
            if (iVar5 < 0) {
              iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
            }
            (**(code **)(*local_8 + 0x98))
                      (local_8,local_2c,local_28 + iVar5,iVar3,local_24 - local_2c);
          }
        }
        piVar1 = piStack_3c;
        *in_FS_OFFSET = uStack_44;
        piStack_3c = (int *)0x4c0ff7;
        puStack_40 = (undefined1 *)0x4c0fe0;
        cVar2 = FUN_00405c98(local_8,&PTR_LAB_004a4a78,piVar1);
        if (cVar2 != '\0') {
          puStack_40 = (undefined1 *)0x4c0fef;
          (**(code **)(*local_8 + 0xa8))();
        }
        return;
      }
    }
  }
  return;
}
