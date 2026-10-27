// rea decompile_all
// name: FUN_00591c28
// address: 0x591c28
// body: available
// range: 0x591c28-0x591c7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00591c28(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;

  FUN_004c3300(param_1,param_2);
  cVar3 = FUN_00592154(param_1);
  if ((cVar3 != '\0') && (*param_2 != 0)) {
    uVar1 = *param_2;
    if ((uVar1 < 0x100) &&
       (((byte)(&DAT_00591c7c)[(int)(uVar1 & 0xff) >> 3] >> (uVar1 & 7) & 1) != 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      FUN_005926c8(param_1,param_2);
      *param_2 = 0;
    }
  }
  return;
}
