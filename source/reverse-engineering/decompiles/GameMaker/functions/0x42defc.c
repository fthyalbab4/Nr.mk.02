// rea decompile_all
// name: FUN_0042defc
// address: 0x42defc
// body: available
// range: 0x42defc-0x42df44 inclusive
// range: 0x42df59-0x42dfe0 inclusive
// range: 0x42dff5-0x42e073 inclusive
// range: 0x42e088-0x42e0ef inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042defc(int *param_1,undefined4 *param_2,undefined4 param_3,float param_4,float param_5,
                 undefined2 param_6)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int extraout_ECX;
  int iVar4;
  double *pdVar5;
  code *local_c;

  local_c = (code *)param_2[2];
  pbVar3 = (byte *)FUN_0042ce64(*(undefined4 *)*param_2);
  bVar1 = *pbVar3;
  if (((uint)local_c & 0xff000000) == 0xff000000) {
    pdVar5 = (double *)(((uint)local_c & 0xffffff) + (int)param_1);
    switch(bVar1 & 0x7f) {
    case 0:
      *(float *)pdVar5 = (float)(float10)CONCAT28(param_6,CONCAT44(param_5,param_4));
      break;
    case 1:
      *pdVar5 = (double)(float10)CONCAT28(param_6,CONCAT44(param_5,param_4));
      break;
    case 2:
      *(float *)pdVar5 = param_4;
      *(float *)((int)pdVar5 + 4) = param_5;
      *(undefined2 *)(pdVar5 + 1) = param_6;
      break;
    case 3:
      *pdVar5 = (double)(longlong)ROUND((float10)CONCAT28(param_6,CONCAT44(param_5,param_4)));
      break;
    case 4:
      *pdVar5 = (double)(longlong)
                        ROUND((float10)CONCAT28(param_6,CONCAT44(param_5,param_4)) *
                              (float10)10000.0);
    }
  }
  else {
    iVar4 = extraout_ECX;
    if (((uint)local_c & 0xff000000) == 0xfe000000) {
      iVar4 = (int)(short)local_c;
      local_c = *(code **)(*param_1 + iVar4);
    }
    iVar2 = param_2[4];
    if (iVar2 == -0x80000000) {
      switch(bVar1 & 0x7f) {
      case 0:
        (*local_c)(param_1);
        break;
      case 1:
        (*local_c)(param_1,0x80000000,iVar4,
                   (double)(float10)CONCAT28(param_6,CONCAT44(param_5,param_4)));
        break;
      case 2:
        (*local_c)(param_1,0x80000000,iVar4,param_4,param_5,param_6);
        break;
      case 3:
        (*local_c)(param_1,0x80000000,iVar4,
                   (longlong)ROUND((float10)CONCAT28(param_6,CONCAT44(param_5,param_4))));
        break;
      case 4:
        (*local_c)(param_1,0x80000000,iVar4,
                   (longlong)
                   ROUND((float10)CONCAT28(param_6,CONCAT44(param_5,param_4)) * (float10)10000.0));
      }
    }
    else {
      switch(bVar1 & 0x7f) {
      case 0:
        (*local_c)(param_1);
        break;
      case 1:
        (*local_c)(param_1,iVar2,iVar4,(double)(float10)CONCAT28(param_6,CONCAT44(param_5,param_4)))
        ;
        break;
      case 2:
        (*local_c)(param_1,iVar2,iVar4,param_4,param_5,param_6);
        break;
      case 3:
        (*local_c)(param_1,iVar2,iVar4,
                   (longlong)ROUND((float10)CONCAT28(param_6,CONCAT44(param_5,param_4))));
        break;
      case 4:
        (*local_c)(param_1,iVar2,iVar4,
                   (longlong)
                   ROUND((float10)CONCAT28(param_6,CONCAT44(param_5,param_4)) * (float10)10000.0));
      }
    }
  }
  return;
}
