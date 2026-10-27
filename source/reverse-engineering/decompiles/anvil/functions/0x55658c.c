// rea decompile_all
// name: FUN_0055658c
// address: 0x55658c
// body: available
// range: 0x55658c-0x55660b inclusive
// range: 0x55662c-0x556743 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055658c(int param_1,int param_2,uint param_3)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;

  uVar3 = 4;
  if (4 < param_3) {
    do {
      puVar2 = (ushort *)(param_2 + uVar3);
      uVar1 = puVar2[1];
      if (uVar1 < 0x204) {
        if (uVar1 == 0x203) {
          iVar4 = FUN_005560c4(&PTR_FUN_005549dc,1,puVar2);
        }
        else if (uVar1 < 10) {
          if (uVar1 == 9) {
            iVar4 = FUN_00556074(&PTR_FUN_00554550,1,puVar2);
          }
          else if (uVar1 == 3) {
            iVar4 = FUN_005561c4(&PTR_FUN_00554dac,1,puVar2);
          }
          else {
            if (uVar1 != 4) goto switchD_00556605_caseD_206;
            iVar4 = FUN_0055621c(&PTR_FUN_00554f68,1,puVar2);
          }
        }
        else if (uVar1 == 0x201) {
          iVar4 = FUN_005560c4(&PTR_FUN_00554884,1,puVar2);
        }
        else {
          if (uVar1 != 0x202) goto switchD_00556605_caseD_206;
          iVar4 = FUN_005560c4(&PTR_FUN_00554930,1,puVar2);
        }
      }
      else {
        switch(uVar1) {
        case 0x204:
          iVar4 = FUN_0055601c(&PTR_FUN_005543e4,1,puVar2);
          FUN_00438d04(*(undefined4 *)(param_1 + 0x1c),iVar4);
          break;
        case 0x205:
          iVar4 = FUN_0055601c(&PTR_FUN_00554498,1,puVar2);
          FUN_00438d04(*(undefined4 *)(param_1 + 0x1c),iVar4);
          break;
        default:
switchD_00556605_caseD_206:
          iVar4 = 0;
          break;
        case 0x208:
          iVar4 = FUN_0055611c(&PTR_FUN_00554a8c,1,puVar2);
          break;
        case 0x209:
          iVar4 = FUN_00556174(&PTR_FUN_00554c38,1,puVar2);
          break;
        case 0x20b:
          iVar4 = FUN_00556274(&PTR_FUN_00555124,1,puVar2);
        }
      }
      if (iVar4 != 0) {
        FUN_00438d04(*(undefined4 *)(param_1 + 0x18),iVar4);
      }
      uVar3 = uVar3 + *puVar2 + 2;
    } while (uVar3 < param_3);
  }
  return;
}
