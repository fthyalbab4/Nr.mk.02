// rea decompile_all
// name: FUN_0043ef1c
// address: 0x43ef1c
// body: available
// range: 0x43ef1c-0x43f0cd inclusive
// range: 0x43f0f0-0x43f10f inclusive
// range: 0x43f117-0x43f142 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43ef41 (push 0x43f143 followed by fs-segment stack chaining); handler 0x43f143 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43ef85 (push 0x43f110 followed by fs-segment stack chaining); handler 0x43f110 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43efbf (push 0x43f0ce followed by fs-segment stack chaining); handler 0x43f0ce lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043ef1c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  byte local_15;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;

  puStack_3c = &stack0xfffffffc;
  puVar4 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xfffffffc;
  puVar8 = &stack0xfffffffc;
  local_20 = 0;
  local_10 = 0;
  local_8 = 0;
  puStack_40 = &LAB_0043f143;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_48 = (undefined1 *)0x43ef52;
  local_1c = param_2;
  local_14 = param_1;
  (**(code **)(*param_1 + 0x28))(param_1,&local_15,&local_24);
  puStack_48 = (undefined1 *)0x43ef5d;
  FUN_00440460(local_14,&local_20);
  puStack_48 = (undefined1 *)0x43ef68;
  FUN_00440460(local_14,&local_10);
  iVar1 = local_14[0xb];
  iVar2 = local_14[7];
  puStack_4c = &LAB_0043f110;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  local_c = local_1c;
  puStack_48 = &stack0xfffffffc;
  if (local_1c == (int *)0x0) {
    if ((local_15 & 1) == 0) {
      puStack_58 = (undefined1 *)0x43efa9;
      puStack_54 = &stack0xfffffffc;
      puStack_48 = &stack0xfffffffc;
      FUN_0043ecc8();
    }
    else {
      puStack_58 = (undefined1 *)0x43efa0;
      puStack_54 = &stack0xfffffffc;
      puStack_48 = &stack0xfffffffc;
      FUN_0043ee78();
    }
  }
  if (local_c != (int *)0x0) {
    puStack_58 = &LAB_0043f0ce;
    uStack_5c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_5c;
    puStack_54 = &stack0xfffffffc;
    FUN_0043eb68(local_c);
    *(ushort *)(local_c + 7) = *(ushort *)(local_c + 7) | 1;
    FUN_0043ebe0(1,1,puVar4);
    if ((local_15 & 1) == 0) {
      FUN_0043edd8();
      puVar5 = puVar6;
    }
    puVar4 = puStack_54;
    if (local_c == (int *)0x0) {
      *in_FS_OFFSET = uStack_5c;
      puStack_54 = (undefined1 *)0x43f004;
      FUN_00406ba8(0,uStack_5c,puVar4);
      puVar5 = puStack_3c;
      *in_FS_OFFSET = uStack_44;
      puStack_3c = &LAB_0043f14a;
      puStack_40 = (undefined1 *)0x43f12c;
      thunk_FUN_004072d8(&local_20,uStack_44,puVar5);
      puStack_40 = (undefined1 *)0x43f134;
      thunk_FUN_004072d8(&local_10);
      puStack_40 = (undefined1 *)0x43f142;
      FUN_00409e08(&local_8,&DAT_0043eb00);
      return;
    }
    if ((*(byte *)((int)local_c + 0x1d) & 2) != 0) {
      local_14[7] = (int)local_c;
    }
    *(ushort *)(local_c + 7) = *(ushort *)(local_c + 7) | 2;
    FUN_0043ebe0(2,1,puVar5,&stack0xfffffffc);
    (**(code **)(*local_c + 0x14))(local_c,local_14);
    *(ushort *)(local_c + 7) = *(ushort *)(local_c + 7) & 0xfffd;
    FUN_0043ebe0(2,0);
    if ((local_15 & 2) != 0) {
      FUN_00406268(local_14[0xb],local_c,local_24);
    }
    if (((local_15 & 1) == 0) && ((*(byte *)((int)local_c + 0x1d) & 2) == 0)) {
      FUN_0043eb2c(local_c);
      FUN_00438d04(local_14[0xd],local_c,puVar8);
    }
    else {
      iVar3 = FUN_00438f2c(local_14[0xd],local_c);
      if (iVar3 < 0) {
        FUN_0043eb2c(local_c);
        FUN_00438d04(local_14[0xd],local_c,puVar7);
      }
    }
    *in_FS_OFFSET = uStack_5c;
  }
  *in_FS_OFFSET = uStack_50;
  local_14[0xb] = iVar1;
  local_14[7] = iVar2;
  return;
}
