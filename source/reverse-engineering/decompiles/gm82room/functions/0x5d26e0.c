// rea decompile_all
// name: FUN_005d26e0
// address: 0x5d26e0
// body: available
// range: 0x5d26e0-0x5d27ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005d26e0(int param_1,int param_2,int param_3,byte param_4,int param_5,undefined2 *param_6)

{
  byte bVar1;
  undefined2 uVar2;
  byte bVar3;
  byte *unaff_EDI;
  byte *local_14;
  byte local_7;
  byte local_6;

  for (; -1 < param_3; param_3 = param_3 + -1) {
    unaff_EDI = *(byte **)(param_2 + param_3 * 4);
  }
  local_7 = 0x80;
  bVar1 = *(byte *)(param_1 + 5);
  local_6 = ~(('\x01' << (8 - bVar1 & 0x1f)) - 1U);
  bVar3 = 8;
  local_14 = unaff_EDI;
  for (; param_5 != 0; param_5 = param_5 + -1) {
    if ((param_4 & local_7) != 0) {
      bVar3 = bVar3 - bVar1;
      uVar2 = FUN_005cee4c((*local_14 & local_6) >> (bVar3 & 0x1f),0xffff,
                           ('\x01' << (bVar1 & 0x1f)) + -1);
      if ((*(byte *)(param_1 + 0x140) & 4) == 0) {
        *param_6 = uVar2;
      }
      else {
        *param_6 = CONCAT11((char)uVar2,(char)((ushort)uVar2 >> 8));
      }
      if (bVar3 == 0) {
        bVar3 = 8;
        local_14 = local_14 + 1;
      }
      local_6 = local_6 >> (bVar1 & 7) | local_6 << 8 - (bVar1 & 7);
    }
    local_7 = local_7 >> 1 | local_7 << 7;
    param_6 = param_6 + 1;
  }
  return;
}
