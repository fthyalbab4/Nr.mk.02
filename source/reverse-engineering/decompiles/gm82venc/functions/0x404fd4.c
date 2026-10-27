// rea decompile_all
// name: FUN_00404fd4
// address: 0x404fd4
// body: available
// range: 0x404fd4-0x40501e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00404fd4(undefined4 *param_1,LPVOID param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  DWORD DStack_8;

  if ((*(short *)(param_1 + 1) == -0x284f) || (*(short *)(param_1 + 1) == -0x284d)) {
    DStack_8 = 0;
    BVar1 = ReadFile((HANDLE)*param_1,param_2,param_1[2],&DStack_8,(LPOVERLAPPED)0x0);
    if (BVar1 == 1) {
      if (DStack_8 == param_1[2]) {
        return;
      }
      DVar2 = 100;
    }
    else {
      DStack_8 = 0x405018;
      DVar2 = GetLastError();
    }
  }
  else {
    DVar2 = 0x67;
  }
  DStack_8 = 0x40501d;
  FUN_004044ac(DVar2);
  return;
}
