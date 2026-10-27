// rea decompile_all
// name: FUN_0073bd04
// address: 0x73bd04
// body: available
// range: 0x73bd04-0x73bd82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0073bd04(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 local_c;

  if (DAT_00780428 == '\0') {
    uVar3 = 0;
    puVar4 = &DAT_007a4ab4;
    local_c = param_3;
    do {
      local_c = CONCAT31(CONCAT21(local_c._2_2_,(char)uVar3),(char)uVar3);
      CharLowerBuffA((LPSTR)((int)&local_c + 1),1);
      CharUpperBuffA((LPSTR)&local_c,1);
      cVar1 = FUN_0073bd94(uVar3);
      if (cVar1 == '\0') {
        cVar1 = FUN_0073bd84(uVar3);
        uVar2 = uVar3;
        if (cVar1 != '\0') {
          uVar2 = local_c & 0xff;
        }
      }
      else {
        uVar2 = local_c >> 8 & 0xff;
      }
      *puVar4 = local_c._1_1_;
      puVar4[0x100] = (CHAR)local_c;
      puVar4[0x200] = (char)uVar2;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
    } while ((char)uVar3 != '\0');
    DAT_00780428 = '\x01';
  }
  return;
}
