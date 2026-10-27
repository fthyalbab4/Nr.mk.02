// rea decompile_all
// name: FUN_004f3f44
// address: 0x4f3f44
// body: available
// range: 0x4f3f44-0x4f4011 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f3f44(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_24 [16];
  uint local_14;
  int local_10;
  int local_c;
  int local_8;

  local_c = **(int **)(param_4 + -8) - param_1[0x10];
  local_8 = *(int *)(*(int *)(param_4 + -8) + 4) - param_1[0x11];
  *(int *)(param_4 + -0x10) = local_c;
  *(int *)(param_4 + -0xc) = local_8;
  (**(code **)(*param_1 + 0x54))(param_1,local_24);
  cVar1 = FUN_0040c15c(local_24,param_4 + -0x10);
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else if (((*(byte *)(param_1 + 7) & 0x10) == 0) ||
          ((*(char *)((int)param_1 + 0x59) == '\0' && ((*(byte *)((int)param_1 + 0x51) & 4) != 0))))
  {
    if (*(char *)((int)param_1 + 0x59) != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x5c))();
      if ((cVar1 != '\0') || (*(char *)(param_4 + -0x11) != '\0')) {
        local_14 = *(uint *)(param_4 + -0x10);
        local_10 = *(int *)(param_4 + -0xc);
        iVar2 = FUN_004efb90(param_1,0xb00a,0,local_14 & 0xffff | local_10 << 0x10);
        bVar3 = iVar2 != 0;
        goto LAB_004f4002;
      }
    }
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
LAB_004f4002:
  if (bVar3) {
    *(int **)(param_4 + -0x18) = param_1;
  }
  return;
}
