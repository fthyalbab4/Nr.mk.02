// rea decompile_all
// name: FUN_0041ec68
// address: 0x41ec68
// body: available
// range: 0x41ec68-0x41eca9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0041ec68(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;

  uVar2 = FUN_0041ebbc(param_1);
  puVar1 = *(undefined4 **)(param_1 + 4 + (uVar2 & 0xff) * 4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    iVar3 = FUN_0041eb54(puVar1 + 2,0x7fffffff);
    if (iVar3 != 0x7fffffff) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  DVar4 = GetCurrentThreadId();
  puVar1[1] = DVar4;
  return puVar1;
}
