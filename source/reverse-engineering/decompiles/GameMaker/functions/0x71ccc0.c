// rea decompile_all
// name: FUN_0071ccc0
// address: 0x71ccc0
// body: available
// range: 0x71ccc0-0x71cd29 inclusive
// range: 0x71cd62-0x71cdc9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0071ccc0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  iVar2 = FUN_0071cdcc(param_1);
  uVar3 = FUN_0071cde4(param_1);
  uVar4 = FUN_0071cdfc(param_1);
  uVar5 = 0xffffffff;
  if (iVar2 - 1U < 2) {
    cVar1 = FUN_004acee4(param_1);
    if ((cVar1 == '\0') || (cVar1 = FUN_004ad044(param_1), cVar1 == '\0')) {
      uVar5 = 1;
    }
    else {
      uVar5 = 2;
    }
  }
  else if (iVar2 - 1U == 2) {
    switch(uVar3) {
    case 1:
      uVar5 = FUN_0062cdb0(uVar4);
      break;
    case 2:
      uVar5 = FUN_006f5b4c(uVar4);
      break;
    case 3:
      uVar5 = FUN_006524ec(uVar4);
      break;
    case 4:
      uVar5 = FUN_00693150(uVar4);
      break;
    case 6:
      uVar5 = FUN_0064e064(uVar4);
      break;
    case 7:
      uVar5 = FUN_00655d6c(uVar4);
      break;
    case 8:
      uVar5 = FUN_00722a6c(uVar4);
      break;
    case 9:
      uVar5 = FUN_006fce84(uVar4);
      break;
    case 10:
      uVar5 = 0xc;
      break;
    case 0xb:
      uVar5 = 0xd;
      break;
    case 0xc:
      uVar5 = FUN_006fa834(uVar4);
      break;
    case 0xd:
      uVar5 = 0x14;
    }
  }
  return uVar5;
}
