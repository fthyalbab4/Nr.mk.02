// rea decompile_all
// name: FUN_00557aac
// address: 0x557aac
// body: available
// range: 0x557aac-0x557b18 inclusive
// range: 0x557b20-0x557b2a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x557adc (push 0x557b19 followed by fs-segment stack chaining); handler 0x557b19 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LPCRITICAL_SECTION FUN_00557aac(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;

  if (param_1 != 0) {
    uVar1 = FUN_004399ac(DAT_0071186c);
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    uVar2 = FUN_005577d8(&DAT_00557464,1,param_1,param_2);
    FUN_00438d04(uVar1,uVar2);
    *in_FS_OFFSET = uStack_24;
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_0071186c + 8);
    uStack_24 = 0x557b18;
    LeaveCriticalSection(lpCriticalSection);
    return lpCriticalSection;
  }
  return (LPCRITICAL_SECTION)0x0;
}
