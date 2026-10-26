// rea decompile_all
// name: FUN_0042a850
// address: 0x42a850
// body: available
// range: 0x42a850-0x42a888 inclusive
// range: 0x42a8b5-0x42a969 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a850(ushort *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  uint local_8;

  bVar3 = false;
  local_8 = FUN_004256a8(param_1);
  uVar2 = FUN_004256a8(param_2);
  switch(param_3) {
  case 0:
    bVar3 = SCARRY4(local_8,uVar2);
    local_8 = local_8 + uVar2;
    break;
  case 1:
    bVar3 = SBORROW4(local_8,uVar2);
    local_8 = local_8 - uVar2;
    break;
  case 2:
    lVar1 = (longlong)(int)local_8;
    local_8 = (uint)(lVar1 * (int)uVar2);
    bVar3 = (longlong)(int)local_8 != lVar1 * (int)uVar2;
    break;
  case 3:
    bVar3 = true;
    break;
  case 4:
    local_8 = (int)local_8 / (int)uVar2;
    break;
  case 5:
    local_8 = (int)local_8 % (int)uVar2;
    break;
  case 6:
    local_8 = local_8 << ((byte)uVar2 & 0x1f);
    break;
  case 7:
    local_8 = local_8 >> ((byte)uVar2 & 0x1f);
    break;
  case 8:
    local_8 = local_8 & uVar2;
    break;
  case 9:
    local_8 = local_8 | uVar2;
    break;
  case 10:
    local_8 = local_8 ^ uVar2;
    break;
  default:
    FUN_00424220();
  }
  if (bVar3) {
    FUN_0042a748(param_1,param_2,param_3);
  }
  else {
    if ((*param_1 & 0xbfe8) != 0) {
      FUN_00424940(param_1);
    }
    *(uint *)(param_1 + 4) = local_8;
    *param_1 = 3;
  }
  return;
}
