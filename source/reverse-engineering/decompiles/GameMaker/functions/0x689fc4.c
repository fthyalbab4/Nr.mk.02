// rea decompile_all
// name: FUN_00689fc4
// address: 0x689fc4
// body: available
// range: 0x689fc4-0x68a171 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x689feb (push 0x68a172 followed by fs-segment stack chaining); handler 0x68a172 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00689fc4(int param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined1 local_e0 [4];
  int local_dc;
  undefined1 local_c8 [4];
  int local_c4;
  int local_b0 [6];
  int local_98 [6];
  undefined1 local_80 [4];
  int local_7c;
  undefined1 local_68 [4];
  int local_64;
  int local_50 [6];
  int local_38 [5];
  undefined1 *puStack_24;
  undefined1 *local_20;

  local_20 = &stack0xfffffffc;
  iVar1 = 0x1b;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  LOCK();
  UNLOCK();
  puStack_24 = &LAB_0068a172;
  local_38[4] = *in_FS_OFFSET;
  *in_FS_OFFSET = local_38 + 4;
  local_38[3] = 0;
  local_38[2] = 0;
  local_38[1] = 0x68a002;
  FUN_00438c38(10000000,10000000,0);
  if ((-1 < param_2) && (param_2 < *(int *)(*(int *)(param_1 + 0x61c) + 0x2f0))) {
    local_38[3] = 0x68a02c;
    FUN_006575dc(*(undefined4 *)(param_1 + 0x61c),param_2,&local_20);
    local_38[3] = 0x68a034;
    iVar1 = FUN_0062cd94(unaff_ESI);
    if (iVar1 != 0) {
      local_38[3] = 0x68a044;
      iVar1 = FUN_006f5b30(*(undefined4 *)(iVar1 + 4));
      if (iVar1 == 0) {
        local_38[3] = 0x68a05d;
        FUN_006575dc(*(undefined4 *)(param_1 + 0x61c),param_2,local_38);
        _ImgDelayDescr_Module_Handle_00000000 = local_38[0];
        local_38[3] = 0x68a072;
        FUN_006575dc(*(undefined4 *)(param_1 + 0x61c),param_2,local_50);
        _DAT_00000008 = local_50[0] + 0x10;
        local_38[3] = 0x68a08b;
        FUN_006575dc(*(undefined4 *)(param_1 + 0x61c),param_2,local_68);
        _DAT_00000004 = local_64;
        local_38[3] = 0x68a0a1;
        FUN_006575dc(*(undefined4 *)(param_1 + 0x61c),param_2,local_80);
        _DAT_0000000c = local_7c + 0x10;
      }
      else {
        local_38[3] = 0x68a0c2;
        FUN_006575dc(*(undefined4 *)(param_1 + 0x61c),param_2,local_98);
        _ImgDelayDescr_Module_Handle_00000000 = local_98[0] - *(int *)(iVar1 + 8);
        local_38[3] = 0x68a0e3;
        FUN_006575dc(*(undefined4 *)(param_1 + 0x61c),param_2,local_b0);
        local_38[3] = local_b0[0] - *(int *)(iVar1 + 8);
        local_38[2] = 0x68a0f8;
        _DAT_00000008 = FUN_005b2ec4(iVar1);
        _DAT_00000008 = local_38[3] + _DAT_00000008;
        local_38[3] = 0x68a111;
        FUN_006575dc(*(undefined4 *)(param_1 + 0x61c),param_2,local_c8);
        _DAT_00000004 = local_c4 - *(int *)(iVar1 + 0xc);
        local_38[3] = 0x68a133;
        FUN_006575dc(*(undefined4 *)(param_1 + 0x61c),param_2,local_e0);
        local_38[3] = local_dc - *(int *)(iVar1 + 0xc);
        local_38[2] = 0x68a148;
        _DAT_0000000c = FUN_005b2edc(iVar1);
        _DAT_0000000c = local_38[3] + _DAT_0000000c;
      }
    }
  }
  *in_FS_OFFSET = local_38[4];
  local_20 = &LAB_0068a179;
  puStack_24 = (undefined1 *)0x68a171;
  FUN_00408e44(local_e0,&DAT_00656108,9);
  return;
}
