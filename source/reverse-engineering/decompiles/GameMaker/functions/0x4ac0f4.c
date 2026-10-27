// rea decompile_all
// name: FUN_004ac0f4
// address: 0x4ac0f4
// body: available
// range: 0x4ac0f4-0x4ac208 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_004ac0f4(int param_1,char param_2,undefined1 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  HWND hWnd;
  int iVar4;
  int iVar5;
  UINT Msg;
  int *piVar6;
  int local_21c;
  WPARAM local_218;
  int local_214 [129];

  local_21c = CONCAT31(local_21c._1_3_,param_3);
  piVar6 = (int *)0x4ac10c;
  cVar1 = FUN_004f7a54(param_1);
  if (cVar1 != '\0') {
    local_218 = *(WPARAM *)(*(int *)(*(int *)(param_1 + 0x270) + 8) + 8);
    if (param_2 != '\0') {
      if (0x80 < (int)local_218) {
        local_218 = 0x80;
      }
      if (local_218 == 0) {
        local_214[1] = 0xffffffff;
        piVar6 = local_214 + 1;
        uVar2 = FUN_004f76a8(param_1);
        FUN_0040efb8(uVar2,0x404,1,piVar6);
        piVar6 = (int *)0x0;
        uVar2 = FUN_004f76a8(param_1);
        FUN_0040ef5c(uVar2,0x40b,0);
      }
      else {
        local_214[0] = 0;
        if (-1 < (int)(local_218 - 2)) {
          iVar5 = local_218 - 1;
          iVar4 = 0;
          piVar6 = local_214;
          do {
            piVar6 = (int *)((int)piVar6 + 4);
            iVar3 = FUN_004ab8a8(*(undefined4 *)(param_1 + 0x270),iVar4);
            local_214[0] = local_214[0] + *(int *)(iVar3 + 0x10);
            *piVar6 = local_214[0];
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_214[local_218] = -1;
        piVar6 = local_214 + 1;
        Msg = 0x404;
        hWnd = (HWND)FUN_004f76a8(param_1);
        SendMessageW(hWnd,Msg,local_218,(LPARAM)piVar6);
      }
    }
    if (-1 < local_21c + -1) {
      iVar5 = 0;
      do {
        FUN_004abf60(param_1,iVar5,(uint)piVar6 & 0xff);
        iVar5 = iVar5 + 1;
        local_21c = local_21c + -1;
      } while (local_21c != 0);
    }
  }
  return;
}
