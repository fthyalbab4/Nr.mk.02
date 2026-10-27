// rea decompile_all
// name: FUN_0048f578
// address: 0x48f578
// body: available
// range: 0x48f578-0x48f709 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0048f578(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;

  local_30 = *(int *)(param_1 + 0x40);
  local_2c = *(int *)(param_1 + 0x44);
  cVar2 = *(char *)(param_1 + 0x5d);
  local_28 = local_30;
  local_24 = local_2c;
  if (cVar2 == '\x01') {
    cVar2 = FUN_004f18d8(param_1);
    if (cVar2 == '\0') {
      local_2c = local_2c + -1;
    }
    else {
      local_2c = local_2c - (*(int *)(*(int *)(param_1 + 0x74) + 0xc) + 1);
    }
  }
  else if (cVar2 == '\x02') {
    cVar2 = FUN_004f18d8(param_1);
    if (cVar2 == '\0') {
      local_2c = local_2c + *(int *)(param_1 + 0x4c);
    }
    else {
      local_2c = local_2c + *(int *)(*(int *)(param_1 + 0x74) + 0x14) + *(int *)(param_1 + 0x4c) + 1
      ;
    }
  }
  else if (cVar2 == '\x03') {
    cVar2 = FUN_004f18d8(param_1);
    if (cVar2 == '\0') {
      local_30 = local_30 + -1;
    }
    else {
      local_30 = local_30 - (*(int *)(*(int *)(param_1 + 0x74) + 8) + 1);
    }
  }
  else {
    if (cVar2 != '\x04') {
      return (int *)0x0;
    }
    cVar2 = FUN_004f18d8(param_1);
    if (cVar2 == '\0') {
      local_30 = local_30 + *(int *)(param_1 + 0x48);
    }
    else {
      local_30 = local_30 + *(int *)(*(int *)(param_1 + 0x74) + 0x10) + *(int *)(param_1 + 0x48) + 1
      ;
    }
  }
  iVar3 = FUN_004f3124(*(undefined4 *)(param_1 + 0x34));
  if (-1 < iVar3 + -1) {
    iVar5 = 0;
    do {
      piVar4 = (int *)FUN_004f30e8(*(undefined4 *)(param_1 + 0x34),iVar5);
      if (*(char *)((int)piVar4 + 0x59) != '\0') {
        cVar2 = (**(code **)(*piVar4 + 0x5c))();
        if (cVar2 != '\0') {
          FUN_004edf30(piVar4,&iStack_20);
          cVar2 = FUN_004f18d8(piVar4);
          if (cVar2 != '\0') {
            iVar1 = piVar4[0x1d];
            iStack_18 = iStack_18 + *(int *)(iVar1 + 0x10);
            iStack_20 = iStack_20 - *(int *)(iVar1 + 8);
            iStack_14 = iStack_14 + *(int *)(iVar1 + 0x14);
            iStack_1c = iStack_1c - *(int *)(iVar1 + 0xc);
          }
          if (iStack_18 == iStack_20) {
            if ((*(char *)(param_1 + 0x5d) == '\x01') || (*(char *)(param_1 + 0x5d) == '\x03')) {
              iStack_20 = iStack_20 + -1;
            }
            else {
              iStack_18 = iStack_18 + 1;
            }
          }
          if (iStack_14 == iStack_1c) {
            if ((*(char *)(param_1 + 0x5d) == '\x01') || (*(char *)(param_1 + 0x5d) == '\x03')) {
              iStack_1c = iStack_1c + -1;
            }
            else {
              iStack_14 = iStack_14 + 1;
            }
          }
          cVar2 = FUN_0040c15c(&iStack_20,&local_30);
          if (cVar2 != '\0') {
            return piVar4;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return (int *)0x0;
}
