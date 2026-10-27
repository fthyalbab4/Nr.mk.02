// rea decompile_all
// name: FUN_004bdff8
// address: 0x4bdff8
// body: available
// range: 0x4bdff8-0x4be02d inclusive
// range: 0x4be042-0x4be0c8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004bdff8(int param_1,int param_2,undefined1 param_3,byte param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_c;

  local_c = 0;
  cVar1 = FUN_004f7a54(param_1);
  if (cVar1 != '\0') {
    uVar5 = 0;
    switch(param_3) {
    case 0:
      uVar5 = 0x400;
      break;
    case 1:
      uVar5 = 0x800;
      break;
    case 2:
      uVar5 = 0x100;
      break;
    case 3:
      uVar5 = 0x200;
      break;
    case 4:
      uVar5 = 0;
    }
    if (param_2 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = FUN_004b920c(param_2);
    }
    if ((param_4 & 2) != 0) {
      uVar5 = uVar5 | 4;
    }
    if ((param_4 & 4) != 0) {
      uVar5 = uVar5 | 8;
    }
    if ((param_4 & 8) != 0) {
      uVar5 = uVar5 | 1;
    }
    if ((param_4 & 0x10) != 0) {
      uVar5 = uVar5 | 2;
    }
    uVar3 = FUN_004f76a8(param_1);
    iVar4 = FUN_0040f9ac(uVar3,uVar2,uVar5);
    if (iVar4 != -1) {
      local_c = FUN_004b9534(*(undefined4 *)(param_1 + 0x29c),iVar4);
    }
  }
  return local_c;
}
