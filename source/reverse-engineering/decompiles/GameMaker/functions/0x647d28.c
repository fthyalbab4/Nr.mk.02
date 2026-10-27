// rea decompile_all
// name: FUN_00647d28
// address: 0x647d28
// body: available
// range: 0x647d28-0x647e52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00647d28(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_1c;
  int local_18;
  undefined1 local_14 [8];

  FUN_004fd580(*(undefined4 *)PTR_DAT_007827e4,local_14);
  FUN_004ee1d0(*(undefined4 *)(param_1 + 0x5dc),local_14,&local_1c);
  FUN_004fd580(*(undefined4 *)PTR_DAT_007827e4,local_14);
  FUN_004ee1d0(*(undefined4 *)(param_1 + 0x5dc),local_14,&local_1c);
  if ((((local_1c < 0) || (local_18 < 0)) ||
      (*(int *)(*(int *)(param_1 + 0x5dc) + 0x48) <= local_1c)) ||
     (iVar7 = local_1c, iVar8 = local_18, *(int *)(*(int *)(param_1 + 0x5dc) + 0x4c) <= local_18)) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x5dc) + 0x48);
    iVar7 = (int)uVar1 >> 1;
    if (iVar7 < 0) {
      iVar7 = iVar7 + (uint)((uVar1 & 1) != 0);
    }
    uVar1 = *(uint *)(*(int *)(param_1 + 0x5dc) + 0x4c);
    iVar8 = (int)uVar1 >> 1;
    if (iVar8 < 0) {
      iVar8 = iVar8 + (uint)((uVar1 & 1) != 0);
    }
  }
  iVar2 = *(int *)(param_1 + 0x6f4);
  iVar3 = *(int *)(param_1 + 0x710);
  iVar4 = *(int *)(param_1 + 0x6f8);
  iVar6 = 0x22;
  piVar5 = &DAT_0077f110;
  do {
    if (*(int *)(param_1 + 0x710) == *piVar5) {
      *(int *)(param_1 + 0x710) = piVar5[1];
      break;
    }
    piVar5 = piVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  FUN_00644aa0(param_1);
  FUN_00644d14(param_1,((iVar2 + iVar7) * 100) / iVar3 - (iVar7 * 100) / *(int *)(param_1 + 0x710),
               ((iVar4 + iVar8) * 100) / iVar3 - (iVar8 * 100) / *(int *)(param_1 + 0x710));
  FUN_00644e28(param_1);
  FUN_004eed28(*(undefined4 *)(param_1 + 0x5dc));
  FUN_00645298(param_1);
  return;
}
