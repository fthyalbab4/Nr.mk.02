// rea decompile_all
// name: FUN_00665008
// address: 0x665008
// body: available
// range: 0x665008-0x6651ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00665008(undefined1 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;

  piVar2 = (int *)FUN_005250cc(&PTR_FUN_0065f350,1,*(undefined4 *)(param_4 + -4));
  FUN_004ee5c0(piVar2,0);
  (**(code **)(*piVar2 + 0x78))(piVar2,*(undefined4 *)(param_4 + -4));
  FUN_004edcac(piVar2,*(int *)(*(int *)(param_4 + -4) + 700) + 1);
  iVar3 = GetSystemMetrics(0x36);
  FUN_004edce0(piVar2,iVar3);
  iVar3 = GetSystemMetrics(0x37);
  FUN_004edd14(piVar2,iVar3);
  *(undefined1 *)(piVar2 + 0x74) = param_1;
  uVar4 = FUN_004d5394(&LAB_00660300,1,*(undefined4 *)(param_4 + -4));
  FUN_004ed6b4(piVar2,uVar4);
  cVar1 = *(char *)(*(int *)(param_4 + -4) + 0x28f);
  if (cVar1 == '\0') {
    FUN_004ed614(piVar2,6);
    cVar1 = (char)piVar2[0x74];
    if (cVar1 == '\0') {
      FUN_004edc78(piVar2,((*(int *)(*(int *)(param_4 + -4) + 0x48) + piVar2[0x12] * -3) -
                          *(int *)(*(int *)(param_4 + -4) + 700)) + -1);
    }
    else if (cVar1 == '\x01') {
      FUN_004edc78(piVar2,((*(int *)(*(int *)(param_4 + -4) + 0x48) + piVar2[0x12] * -2) -
                          *(int *)(*(int *)(param_4 + -4) + 700)) + -1);
    }
    else if (cVar1 == '\x02') {
      FUN_004edc78(piVar2,((*(int *)(*(int *)(param_4 + -4) + 0x48) - piVar2[0x12]) -
                          *(int *)(*(int *)(param_4 + -4) + 700)) + -1);
    }
  }
  else if (cVar1 == '\x01') {
    cVar1 = (char)piVar2[0x74];
    if (cVar1 == '\0') {
      FUN_004edc78(piVar2,piVar2[0x12] * 2 + *(int *)(*(int *)(param_4 + -4) + 700) + 1);
    }
    else if (cVar1 == '\x01') {
      FUN_004edc78(piVar2,piVar2[0x12] + *(int *)(*(int *)(param_4 + -4) + 700) + 1);
    }
    else if (cVar1 == '\x02') {
      FUN_004edc78(piVar2,*(int *)(*(int *)(param_4 + -4) + 700) + 1);
    }
  }
  uVar4 = (**(code **)(*piVar2 + 0x4c))();
  iVar3 = FUN_00405cbc(uVar4,&LAB_00660300);
  cVar1 = (char)piVar2[0x74];
  if (cVar1 == '\0') {
    *(undefined1 *)(iVar3 + 0xb0) = 3;
  }
  else if (cVar1 == '\x01') {
    *(undefined1 *)(iVar3 + 0xb0) = 2;
  }
  else if (cVar1 == '\x02') {
    *(undefined1 *)(iVar3 + 0xb0) = 1;
  }
  FUN_004ee5c0(*(undefined4 *)(param_4 + -4),1);
  return piVar2;
}
