// rea decompile_all
// name: FUN_005a33f4
// address: 0x5a33f4
// body: available
// range: 0x5a33f4-0x5a35da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a33f4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar1 = param_1[9];
  if (iVar1 == 1) {
    param_1[10] = 1;
    param_1[0xb] = 1;
  }
  else if (iVar1 == 3) {
    if (param_1[0x46] == 0) {
      if (param_1[0x49] == 0) {
        piVar2 = (int *)param_1[0x36];
        iVar1 = *piVar2;
        iVar3 = piVar2[0x15];
        iVar4 = piVar2[0x2a];
        if (((iVar1 == 1) && (iVar3 == 2)) && (iVar4 == 3)) {
          param_1[10] = 3;
        }
        else if (((iVar1 == 0x52) && (iVar3 == 0x47)) && (iVar4 == 0x42)) {
          param_1[10] = 2;
        }
        else {
          iVar5 = *param_1;
          *(int *)(iVar5 + 0x18) = iVar1;
          *(int *)(iVar5 + 0x1c) = iVar3;
          *(int *)(iVar5 + 0x20) = iVar4;
          *(undefined4 *)(*param_1 + 0x14) = 0x6f;
          (**(code **)(*param_1 + 4))(param_1,1);
          param_1[10] = 3;
        }
      }
      else if ((char)param_1[0x4a] == '\0') {
        param_1[10] = 2;
      }
      else if ((char)param_1[0x4a] == '\x01') {
        param_1[10] = 3;
      }
      else {
        iVar1 = *param_1;
        *(undefined4 *)(iVar1 + 0x14) = 0x72;
        *(uint *)(iVar1 + 0x18) = (uint)*(byte *)(param_1 + 0x4a);
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
        param_1[10] = 3;
      }
    }
    else {
      param_1[10] = 3;
    }
    param_1[0xb] = 2;
  }
  else if (iVar1 == 4) {
    if (param_1[0x49] == 0) {
      param_1[10] = 4;
    }
    else if ((char)param_1[0x4a] == '\0') {
      param_1[10] = 4;
    }
    else if ((char)param_1[0x4a] == '\x02') {
      param_1[10] = 5;
    }
    else {
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + 0x14) = 0x72;
      *(uint *)(iVar1 + 0x18) = (uint)*(byte *)(param_1 + 0x4a);
      (**(code **)(*param_1 + 4))(param_1,0xffffffff);
      param_1[10] = 5;
    }
    param_1[0xb] = 4;
  }
  else {
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  param_1[0xc] = 1;
  param_1[0xd] = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3ff00000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 2;
  param_1[0x13] = 1;
  param_1[0x14] = 1;
  param_1[0x15] = 0;
  param_1[0x16] = 2;
  param_1[0x17] = 1;
  param_1[0x18] = 0x100;
  param_1[0x22] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return;
}
