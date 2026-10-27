// rea decompile_all
// name: FUN_006749b0
// address: 0x6749b0
// body: available
// range: 0x6749b0-0x6749e5 inclusive
// range: 0x674a0e-0x674b0d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006749b0(int param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;

  if (param_2 != *(char *)(param_1 + 0x76)) {
    iVar4 = *(int *)(param_1 + 0x78);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    switch(param_2) {
    case '\0':
      uVar2 = FUN_006735ac(&PTR_FUN_0066b770,1,param_1);
      *(undefined4 *)(param_1 + 0x78) = uVar2;
      break;
    case '\x01':
      uVar2 = FUN_006737c0(&PTR_FUN_0066c1ac,1,param_1);
      *(undefined4 *)(param_1 + 0x78) = uVar2;
      break;
    case '\x02':
    case '\x03':
      uVar2 = FUN_00673914(&PTR_FUN_0066bd20,1,param_1);
      *(undefined4 *)(param_1 + 0x78) = uVar2;
      break;
    case '\x04':
      uVar2 = FUN_006736f4(&PTR_FUN_0066ba1c,1,param_1);
      *(undefined4 *)(param_1 + 0x78) = uVar2;
      break;
    case '\x05':
      uVar2 = FUN_00673b74(&PTR_FUN_0066c458,1,param_1);
      *(undefined4 *)(param_1 + 0x78) = uVar2;
      break;
    case '\x06':
    case '\a':
      uVar2 = FUN_0067a524(&PTR_FUN_0066b494,1,param_1);
      *(undefined4 *)(param_1 + 0x78) = uVar2;
      break;
    case '\b':
      uVar2 = FUN_00673aa8(&PTR_FUN_0066bf90,1,param_1);
      *(undefined4 *)(param_1 + 0x78) = uVar2;
      break;
    case '\t':
      FUN_00673fc4(param_1);
      uVar2 = FUN_00671654();
      iVar3 = FUN_00405d08(uVar2,param_1);
      uVar2 = (**(code **)(iVar3 + 0x10))(iVar3,1,param_1);
      *(undefined4 *)(param_1 + 0x78) = uVar2;
    }
    if (iVar4 != 0) {
      (**(code **)(**(int **)(param_1 + 0x78) + 8))(*(int **)(param_1 + 0x78),iVar4);
    }
    FUN_00405a7c(iVar4);
    *(char *)(param_1 + 0x76) = param_2;
    if ((*(int *)(param_1 + 0x44) != 0) &&
       (iVar4 = FUN_00679e90(*(int *)(param_1 + 0x44)), iVar4 != 0)) {
      FUN_00679e90(*(undefined4 *)(param_1 + 0x44));
      cVar1 = FUN_004f1b70();
      if (cVar1 == '\0') {
        piVar5 = (int *)FUN_00679e90(*(undefined4 *)(param_1 + 0x44));
        (**(code **)(*piVar5 + 0x168))();
      }
    }
  }
  return;
}
