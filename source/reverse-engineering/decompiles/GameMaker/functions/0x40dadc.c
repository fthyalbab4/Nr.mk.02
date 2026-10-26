// rea decompile_all
// name: KERNEL32.DLL::CompareStringW
// address: 0x40dadc
// body: available
// range: 0x40dadc-0x40dae1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __stdcall
CompareStringW(LCID Locale,DWORD dwCmpFlags,PCNZWCH lpString1,int cchCount1,PCNZWCH lpString2,
              int cchCount2)

{
  int iVar1;

                    /* WARNING: Could not recover jumptable at 0x0040dadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CompareStringW(Locale,dwCmpFlags,lpString1,cchCount1,lpString2,cchCount2);
  return iVar1;
}
