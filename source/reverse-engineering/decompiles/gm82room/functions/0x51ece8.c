// rea decompile_all
// name: FUN_0051ece8
// address: 0x51ece8
// body: available
// range: 0x51ece8-0x51ed77 inclusive
// range: 0x51ed7a-0x51edc6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51ed0b (push 0x51edc7 followed by fs-segment stack chaining); handler 0x51edc7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing reports a terminal call at 0x51ed73 to 0x406ab4 FUN_00406ab4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x51eda2 to 0x406ab4 FUN_00406ab4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051ece8(int param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_21c;
  undefined1 *puStack_218;
  undefined1 *puStack_214;
  undefined4 local_20c;
  undefined4 local_208;
  WCHAR local_204 [256];

  puStack_214 = &stack0xfffffffc;
  local_20c = 0;
  local_208 = 0;
  puStack_218 = &LAB_0051edc7;
  uStack_21c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_21c;
  if (param_1 != 0) {
    *in_FS_OFFSET = uStack_21c;
    puStack_214 = &LAB_0051edce;
    puStack_218 = (undefined1 *)0x51edc6;
    thunk_FUN_004072fc(&local_20c,2,&stack0xfffffffc);
    return;
  }
  DVar1 = GetLastError();
  if (DVar1 != 0) {
    DVar1 = FormatMessageW(0x1000,(LPCVOID)0x0,DVar1,0x400,local_204,0x200,(va_list *)0x0);
    if (DVar1 != 0) {
      uVar2 = FUN_0051ece4();
      FUN_004083a4(&local_208,local_204,0x100,uVar2);
      FUN_0041bd4c(&LAB_0042db84,1,local_208);
      FUN_00406ab4();
      return;
    }
  }
  uVar2 = FUN_0051ece4();
  FUN_0040b9d0(PTR_LAB_00688a34,&local_20c);
  FUN_0041bd4c(&LAB_0042db84,1,local_20c,uVar2);
  FUN_00406ab4();
  return;
}
