// rea decompile_all
// name: FUN_0053b720
// address: 0x53b720
// body: available
// range: 0x53b720-0x53b82d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x53b742 (push 0x53b82e followed by fs-segment stack chaining); handler 0x53b82e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053b720(int *param_1,int *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int local_8;

  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_8 = 0;
  puStack_30 = &LAB_0053b82e;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_10 = param_2;
  local_c = param_1;
  iVar3 = (**(code **)(*param_2 + 0x14))();
  if (-1 < iVar3 + -1) {
    local_14 = 0;
    local_18 = iVar3;
    do {
      iVar3 = *local_10;
      (**(code **)(iVar3 + 0xc))(local_10,local_14,&local_8);
      iVar4 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar4 = FUN_00407048(&local_8,local_8);
      }
      uVar6 = 0;
      if (iVar4 != 0) {
        uVar6 = *(uint *)(iVar4 + -4);
      }
      uVar1 = uVar6;
      if (0xff < (int)uVar6) {
        uVar1 = CONCAT31((int3)((uint)iVar3 >> 8),0xff);
      }
      while (0 < (int)uVar6) {
        uVar6 = uVar6 - (uVar1 & 0xff);
        FUN_0053b68c(local_c,uVar1);
        FUN_0040810c(&local_1c,local_8,0);
        uVar5 = FUN_00407670(local_1c);
        (**(code **)(*local_c + 0x10))(local_c,uVar5,uVar1 & 0xff);
        FUN_00408778(&local_8,1,uVar1 & 0xff);
        if ((int)uVar6 < (int)(uVar1 & 0xff)) {
          uVar1 = uVar6;
        }
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  FUN_0053b68c(local_c,0);
  puVar2 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0053b835;
  puStack_30 = (undefined1 *)0x53b825;
  FUN_00406e5c(&local_1c,uStack_34,puVar2);
  puStack_30 = (undefined1 *)0x53b82d;
  thunk_FUN_00406e5c(&local_8);
  return;
}
