// rea decompile_all
// name: FUN_0041ebd8
// address: 0x41ebd8
// body: available
// range: 0x41ebd8-0x41ec4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041ebd8(int param_1,undefined4 *param_2)

{
  uint uVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  undefined4 uVar4;

  uVar1 = FUN_0041ebbc(param_1);
  DVar2 = GetCurrentThreadId();
  for (puVar3 = *(undefined4 **)(param_1 + 4 + (uVar1 & 0xff) * 4);
      (puVar3 != (undefined4 *)0x0 && (DVar2 != puVar3[1])); puVar3 = (undefined4 *)*puVar3) {
  }
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_0041ec68(param_1);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_00404304(0x10);
      puVar3[1] = DVar2;
      puVar3[2] = 0x7fffffff;
      *puVar3 = puVar3;
      uVar4 = FUN_0041eb54(param_1 + 4 + (uVar1 & 0xff) * 4,puVar3);
      *puVar3 = uVar4;
    }
  }
  *param_2 = puVar3;
  return;
}
