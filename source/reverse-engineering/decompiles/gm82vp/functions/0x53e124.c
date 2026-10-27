// rea decompile_all
// name: FUN_0053e124
// address: 0x53e124
// body: available
// range: 0x53e124-0x53e15f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053e124(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  undefined2 *puVar2;
  undefined4 local_10;

  local_10 = param_3 & 0xffffff00;
  puVar2 = &DAT_00690154;
  do {
    local_10 = local_10 & 0xffff;
    GetStringTypeExA(0x400,1,(LPCSTR)&local_10,1,(LPWORD)((int)&local_10 + 2));
    *puVar2 = local_10._2_2_;
    cVar1 = (char)local_10 + '\x01';
    local_10 = CONCAT31(local_10._1_3_,cVar1);
    puVar2 = puVar2 + 1;
  } while (cVar1 != '\0');
  return;
}
