// rea decompile_all
// name: FUN_004fa804
// address: 0x4fa804
// body: available
// range: 0x4fa804-0x4fa97c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fa804(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 local_18 [16];
  int local_8;

  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    return;
  }
  if (*(char *)(iVar2 + 0x59) == '\0') {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0x6c) != 0) {
    return;
  }
  *(undefined1 *)(iVar2 + 0x8c) = *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x10);
  local_8 = param_1;
  iVar2 = FUN_004fa5a8(param_1,2);
  iVar3 = FUN_004fa5a8(local_8,1);
  cVar1 = FUN_004fa7d4();
  if (cVar1 != '\0') {
    if (*(char *)(*(int *)(local_8 + 0x14) + 0x10) == '\x01') {
      iVar2 = iVar2 - *(int *)(*(int *)(local_8 + 0x1c) + 0xc);
    }
    else {
      iVar3 = iVar3 - *(int *)(*(int *)(local_8 + 0x1c) + 0xc);
    }
  }
  iVar4 = FUN_004faa58(local_8);
  if ((iVar4 == 0) &&
     (((*(int *)(local_8 + 0x14) == *(int *)(*(int *)(local_8 + 0x1c) + 100) ||
       (*(char *)(*(int *)(local_8 + 0x14) + 0x10) !=
        *(char *)(*(int *)(*(int *)(local_8 + 0x1c) + 100) + 0x10))) ||
      (iVar4 = FUN_004fa980(local_8), *(int *)(*(int *)(local_8 + 0x1c) + 0x68) <= iVar4)))) {
    if (*(char *)(*(int *)(local_8 + 0x14) + 0x10) ==
        *(char *)(*(int *)(*(int *)(local_8 + 0x1c) + 100) + 0x10)) goto LAB_004fa92d;
    iVar4 = FUN_004fa980(local_8);
    iVar5 = FUN_004fa980(*(undefined4 *)(*(int *)(local_8 + 0x1c) + 100));
    if (iVar5 <= iVar4) goto LAB_004fa92d;
  }
  if (*(char *)(*(int *)(local_8 + 0x14) + 0x10) == '\x01') {
    iVar3 = iVar3 - *(int *)(*(int *)(local_8 + 0x1c) + 0xc);
  }
  else {
    iVar2 = iVar2 - *(int *)(*(int *)(local_8 + 0x1c) + 0xc);
  }
LAB_004fa92d:
  puVar8 = local_18;
  uVar6 = FUN_004fa524(local_8,1);
  uVar7 = FUN_004fa524(local_8,2);
  FUN_0040c280(uVar7,uVar6,iVar2,puVar8,iVar3);
  (**(code **)**(undefined4 **)(local_8 + 0x1c))
            (*(undefined4 **)(local_8 + 0x1c),*(undefined4 *)(local_8 + 4),local_18);
  FUN_004edf50(*(undefined4 *)(local_8 + 4),local_18);
  return;
}
