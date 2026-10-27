// rea decompile_all
// name: FUN_004a50cc
// address: 0x4a50cc
// body: available
// range: 0x4a50cc-0x4a52aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4a50e5 (push 0x4a52ab followed by fs-segment stack chaining); handler 0x4a52ab lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a50cc(uint param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_004a52ab;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uVar2 = param_1 & 0xff;
  if (uVar2 < 0x2d) {
    if (uVar2 - 8 < 2) {
      puStack_1c = &stack0xfffffffc;
      FUN_004081e8(&local_8,*(undefined4 *)(&DAT_006816e8 + (param_1 & 0xff) * 4));
      goto LAB_004a5230;
    }
    if (uVar2 == 0xd) {
      puStack_1c = &stack0xfffffffc;
      FUN_004081e8(&local_8,DAT_00681714);
      goto LAB_004a5230;
    }
    if (uVar2 == 0x1b) {
      puStack_1c = &stack0xfffffffc;
      FUN_004081e8(&local_8,DAT_00681710);
      goto LAB_004a5230;
    }
    if (uVar2 - 0x20 < 9) {
      puStack_1c = &stack0xfffffffc;
      FUN_004081e8(&local_8,*(undefined4 *)(&DAT_00681688 + (uint)(byte)((char)param_1 + 4) * 4));
      goto LAB_004a5230;
    }
  }
  else if (uVar2 < 0x41) {
    if (uVar2 - 0x2d < 2) {
      puStack_1c = &stack0xfffffffc;
      FUN_004081e8(&local_8,(&PTR_PTR_00681654)[(byte)((char)param_1 + 0xd)]);
      goto LAB_004a5230;
    }
    if (uVar2 - 0x30 < 10) {
      puStack_1c = &stack0xfffffffc;
      FUN_00408310(&local_8,param_1 & 0xff);
      goto LAB_004a5230;
    }
  }
  else {
    if (uVar2 - 0x41 < 0x1a) {
      FUN_00408310(&local_8,param_1 & 0xff);
      goto LAB_004a5230;
    }
    if (uVar2 - 0x60 < 10) {
      puStack_1c = &stack0xfffffffc;
      FUN_00408310(&local_8,(param_1 & 0xff) - 0x30);
      goto LAB_004a5230;
    }
    if (uVar2 - 0x70 < 0x18) {
      puStack_1c = &stack0xfffffffc;
      FUN_0041636c((param_1 & 0xff) - 0x6f,&local_c);
      FUN_00408678(&local_8,&DAT_004a52c8,local_c);
      goto LAB_004a5230;
    }
  }
  puStack_1c = &stack0xfffffffc;
  FUN_004a507c(param_1,&local_8);
LAB_004a5230:
  if (local_8 == 0) {
    FUN_00408194(param_2,0);
  }
  else {
    FUN_00408194(param_2,0);
    if ((param_1 & 0x2000) != 0) {
      FUN_004085b8(param_2,DAT_00681744);
    }
    if ((param_1 & 0x4000) != 0) {
      FUN_004085b8(param_2,DAT_00681748);
    }
    if ((param_1 & 0x8000) != 0) {
      FUN_004085b8(param_2,DAT_0068174c);
    }
    FUN_004085b8(param_2,local_8);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004a52b2;
  puStack_20 = (undefined1 *)0x4a52aa;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
