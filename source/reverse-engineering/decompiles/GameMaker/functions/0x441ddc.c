// rea decompile_all
// name: FUN_00441ddc
// address: 0x441ddc
// body: available
// range: 0x441ddc-0x441f8d inclusive
// range: 0x441fb0-0x441fcf inclusive
// range: 0x441fd7-0x442002 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x441e01 (push 0x442003 followed by fs-segment stack chaining); handler 0x442003 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x441e45 (push 0x441fd0 followed by fs-segment stack chaining); handler 0x441fd0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x441e7f (push 0x441f8e followed by fs-segment stack chaining); handler 0x441f8e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441ddc(int *param_1,int *param_2)

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
  puStack_40 = &LAB_00442003;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_48 = (undefined1 *)0x441e12;
  local_1c = param_2;
  local_14 = param_1;
  (**(code **)(*param_1 + 0x28))(param_1,&local_15,&local_24);
  puStack_48 = (undefined1 *)0x441e1d;
  FUN_00443320(local_14,&local_20);
  puStack_48 = (undefined1 *)0x441e28;
  FUN_00443320(local_14,&local_10);
  iVar1 = local_14[0xb];
  iVar2 = local_14[7];
  puStack_4c = &LAB_00441fd0;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  local_c = local_1c;
  puStack_48 = &stack0xfffffffc;
  if (local_1c == (int *)0x0) {
    if ((local_15 & 1) == 0) {
      puStack_58 = (undefined1 *)0x441e69;
      puStack_54 = &stack0xfffffffc;
      puStack_48 = &stack0xfffffffc;
      FUN_00441b88();
    }
    else {
      puStack_58 = (undefined1 *)0x441e60;
      puStack_54 = &stack0xfffffffc;
      puStack_48 = &stack0xfffffffc;
      FUN_00441d38();
    }
  }
  if (local_c != (int *)0x0) {
    puStack_58 = &LAB_00441f8e;
    uStack_5c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_5c;
    puStack_54 = &stack0xfffffffc;
    FUN_00441a28(local_c);
    *(ushort *)(local_c + 7) = *(ushort *)(local_c + 7) | 1;
    FUN_00441aa0(1,1,puVar4);
    if ((local_15 & 1) == 0) {
      FUN_00441c98();
      puVar5 = puVar6;
    }
    puVar4 = puStack_54;
    if (local_c == (int *)0x0) {
      *in_FS_OFFSET = uStack_5c;
      puStack_54 = (undefined1 *)0x441ec4;
      FUN_0040670c(0,uStack_5c,puVar4);
      puVar5 = puStack_3c;
      *in_FS_OFFSET = uStack_44;
      puStack_3c = &LAB_0044200a;
      puStack_40 = (undefined1 *)0x441fec;
      thunk_FUN_00406e5c(&local_20,uStack_44,puVar5);
      puStack_40 = (undefined1 *)0x441ff4;
      thunk_FUN_00406e5c(&local_10);
      puStack_40 = (undefined1 *)0x442002;
      FUN_00409ce0(&local_8,&DAT_004419c0);
      return;
    }
    if ((*(byte *)((int)local_c + 0x1d) & 2) != 0) {
      local_14[7] = (int)local_c;
    }
    *(ushort *)(local_c + 7) = *(ushort *)(local_c + 7) | 2;
    FUN_00441aa0(2,1,puVar5,&stack0xfffffffc);
    (**(code **)(*local_c + 0x14))(local_c,local_14);
    *(ushort *)(local_c + 7) = *(ushort *)(local_c + 7) & 0xfffd;
    FUN_00441aa0(2,0);
    if ((local_15 & 2) != 0) {
      FUN_00405d08(local_14[0xb],local_c,local_24);
    }
    if (((local_15 & 1) == 0) && ((*(byte *)((int)local_c + 0x1d) & 2) == 0)) {
      FUN_004419ec(local_c);
      FUN_0043ae88(local_14[0xd],local_c,puVar8);
    }
    else {
      iVar3 = FUN_0043b0b0(local_14[0xd],local_c);
      if (iVar3 < 0) {
        FUN_004419ec(local_c);
        FUN_0043ae88(local_14[0xd],local_c,puVar7);
      }
    }
    *in_FS_OFFSET = uStack_5c;
  }
  *in_FS_OFFSET = uStack_50;
  local_14[0xb] = iVar1;
  local_14[7] = iVar2;
  return;
}
