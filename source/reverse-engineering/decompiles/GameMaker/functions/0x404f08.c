// rea decompile_all
// name: FUN_00404f08
// address: 0x404f08
// body: available
// range: 0x404f08-0x404f4a inclusive
// range: 0x404f4e-0x404f63 inclusive
// range: 0x404f66-0x404fa2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00404f08(double *param_1,int param_2,undefined1 param_3)

{
  double dVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;

  uVar3 = CONCAT11(param_3,param_3);
  if (0x1f < param_2) {
    *(undefined2 *)param_1 = uVar3;
    *(undefined2 *)((int)param_1 + 2) = uVar3;
    *(undefined2 *)((int)param_1 + 4) = uVar3;
    *(undefined2 *)((int)param_1 + 6) = uVar3;
    dVar1 = *param_1;
    *(double *)(param_2 + -0x10 + (int)param_1) = dVar1;
    *(double *)(param_2 + -8 + (int)param_1) = dVar1;
    iVar4 = ((uint)param_1 & 7) - 8;
    iVar5 = param_2 + -0x10 + iVar4;
    iVar4 = iVar5 - iVar4;
    iVar5 = -iVar5;
    do {
      *(double *)((int)param_1 + iVar5 + iVar4) = dVar1;
      *(double *)((int)param_1 + iVar5 + 8 + iVar4) = dVar1;
      bVar2 = iVar5 < -0x10;
      iVar5 = iVar5 + 0x10;
    } while (bVar2);
    ffree((float10)dVar1);
    return;
  }
  if (0 < param_2) {
    *(undefined1 *)(param_2 + -1 + (int)param_1) = param_3;
    switch(param_2) {
    case 1:
      break;
    case 0x1e:
    case 0x1f:
      *(undefined2 *)((int)param_1 + 0x1c) = uVar3;
    case 0x1c:
    case 0x1d:
      *(undefined2 *)((int)param_1 + 0x1a) = uVar3;
    case 0x1a:
    case 0x1b:
      *(undefined2 *)(param_1 + 3) = uVar3;
    case 0x18:
    case 0x19:
      *(undefined2 *)((int)param_1 + 0x16) = uVar3;
    case 0x16:
    case 0x17:
      *(undefined2 *)((int)param_1 + 0x14) = uVar3;
    case 0x14:
    case 0x15:
      *(undefined2 *)((int)param_1 + 0x12) = uVar3;
    case 0x12:
    case 0x13:
      *(undefined2 *)(param_1 + 2) = uVar3;
    case 0x10:
    case 0x11:
      *(undefined2 *)((int)param_1 + 0xe) = uVar3;
    case 0xe:
    case 0xf:
      *(undefined2 *)((int)param_1 + 0xc) = uVar3;
    case 0xc:
    case 0xd:
      *(undefined2 *)((int)param_1 + 10) = uVar3;
    case 10:
    case 0xb:
      *(undefined2 *)(param_1 + 1) = uVar3;
    case 8:
    case 9:
      *(undefined2 *)((int)param_1 + 6) = uVar3;
    case 6:
    case 7:
      *(undefined2 *)((int)param_1 + 4) = uVar3;
    case 4:
    case 5:
      *(undefined2 *)((int)param_1 + 2) = uVar3;
    default:
      *(undefined2 *)param_1 = uVar3;
      return;
    }
  }
  return;
}
