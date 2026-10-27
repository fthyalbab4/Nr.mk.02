// rea decompile_all
// name: FUN_005703b4
// address: 0x5703b4
// body: available
// range: 0x5703b4-0x57048d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5703dc (push 0x57048e followed by fs-segment stack chaining); handler 0x57048e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005703b4(undefined4 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  puStack_18 = (undefined1 *)0x5703cc;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_1c = &LAB_0057048e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  DAT_00686a44 = DAT_00686a44 + 1;
  puStack_18 = &stack0xfffffffc;
  FUN_00409dfc(&DAT_00686a3c,&DAT_0056febc,1,DAT_00686a44);
  FUN_00409dfc(&DAT_00686a40,&DAT_0056feec,1,DAT_00686a44);
  FUN_0041636c(DAT_00686a44 + -1,&local_c);
  FUN_00408678(DAT_00686a40 + -4 + DAT_00686a44 * 4,L"__newbackground",local_c);
  uVar3 = FUN_0056fda8(&DAT_0056efc8,1);
  *(undefined4 *)(DAT_00686a3c + -4 + DAT_00686a44 * 4) = uVar3;
  cVar2 = FUN_0056f89c(*(undefined4 *)(DAT_00686a3c + -4 + DAT_00686a44 * 4),local_8);
  puVar1 = puStack_18;
  if (cVar2 == '\0') {
    DAT_00686a44 = DAT_00686a44 + -1;
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00570495;
  puStack_1c = (undefined1 *)0x57048d;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
