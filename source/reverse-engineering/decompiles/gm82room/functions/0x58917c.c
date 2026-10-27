// rea decompile_all
// name: FUN_0058917c
// address: 0x58917c
// body: available
// range: 0x58917c-0x589255 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5891a7 (push 0x589256 followed by fs-segment stack chaining); handler 0x589256 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058917c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  undefined1 local_108 [256];
  undefined4 local_8;

  puStack_118 = (undefined1 *)0x589197;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_11c = &LAB_00589256;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puStack_118 = &stack0xfffffffc;
  iVar2 = FUN_00409c34(DAT_00686b1c);
  if (iVar2 <= DAT_00686b20) {
    FUN_00409dfc(&DAT_00686b1c,&DAT_00589154,1,DAT_00686b20 + 10);
  }
  DAT_00686b20 = DAT_00686b20 + 1;
  FUN_00408448(local_108,local_8,0xff);
  FUN_00404cfc(DAT_00686b1c + -0x50 + DAT_00686b20 * 0x50,local_108,0x40);
  puVar1 = puStack_118;
  *(undefined4 *)(DAT_00686b1c + -0xc + DAT_00686b20 * 0x50) = param_2;
  *(undefined4 *)(DAT_00686b1c + -8 + DAT_00686b20 * 0x50) = param_3;
  *(undefined1 *)(DAT_00686b1c + -4 + DAT_00686b20 * 0x50) = param_4;
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_0058925d;
  puStack_11c = (undefined1 *)0x589255;
  thunk_FUN_004072d8(&local_8,uStack_120,puVar1);
  return;
}
