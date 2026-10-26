// rea decompile_all
// name: FUN_0058b5a8
// address: 0x58b5a8
// body: available
// range: 0x58b5a8-0x58b5ea inclusive
// range: 0x58b603-0x58b881 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058b5a8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double local_1c;

  iVar1 = DAT_00686b28 + *(int *)(param_1 + 4) * 0x120;
  if ((*(int *)(param_1 + 8) < 1) || (*(int *)(param_1 + 0xc) < 1)) {
    switch(*(undefined4 *)(iVar1 + 0xcc)) {
    case 0:
      uVar3 = FUN_004048b8();
      *(undefined4 *)(param_1 + 0x48) = uVar3;
      break;
    case 1:
      uVar3 = FUN_004048b8();
      *(undefined4 *)(param_1 + 0x48) = uVar3;
      break;
    case 2:
      uVar3 = FUN_004048b8();
      *(undefined4 *)(param_1 + 0x48) = uVar3;
      break;
    case 3:
      FUN_0058b2d0(0,DAT_00686b28,param_3,*(undefined4 *)(iVar1 + 0xd8),
                   *(undefined4 *)(iVar1 + 0xdc),*(undefined4 *)(iVar1 + 0xd0),
                   *(undefined4 *)(iVar1 + 0xd4));
      uVar3 = FUN_004048b8();
      FUN_0058b2d0(0);
      uVar4 = FUN_004048b8();
      FUN_0058b2d0(0);
      uVar2 = FUN_004048b8();
      uVar3 = FUN_005144ec(uVar3,uVar4,uVar2);
      *(undefined4 *)(param_1 + 0x48) = uVar3;
      break;
    case 4:
      FUN_0058b2d0(0,DAT_00686b28,param_3,*(undefined4 *)(iVar1 + 0xd8),
                   *(undefined4 *)(iVar1 + 0xdc),*(undefined4 *)(iVar1 + 0xd0),
                   *(undefined4 *)(iVar1 + 0xd4));
      uVar3 = FUN_004048b8();
      FUN_0058b2d0(0);
      uVar4 = FUN_004048b8();
      FUN_0058b2d0(0);
      uVar2 = FUN_004048b8();
      uVar3 = FUN_00514770(uVar3,uVar4,uVar2);
      *(undefined4 *)(param_1 + 0x48) = uVar3;
      break;
    case 5:
      FUN_004047d4();
      uVar3 = FUN_004048b8();
      uVar4 = FUN_004048b8();
      uVar3 = FUN_00514868(uVar4,uVar3);
      *(undefined4 *)(param_1 + 0x48) = uVar3;
    }
  }
  else if (*(int *)(iVar1 + 0xcc) == 1) {
    uVar3 = FUN_004048b8();
    uVar4 = FUN_004048b8();
    uVar3 = FUN_00514868(uVar4,uVar3);
    *(undefined4 *)(param_1 + 0x48) = uVar3;
  }
  else if (*(int *)(iVar1 + 0xcc) == 2) {
    local_1c = (double)(*(int *)(param_1 + 8) * 2) / (double)*(int *)(param_1 + 0xc);
    if (2.0 < local_1c) {
      local_1c = 2.0;
    }
    if (1.0 <= local_1c) {
      uVar3 = FUN_004048b8();
      uVar4 = FUN_004048b8();
      uVar3 = FUN_00514868(uVar4,uVar3);
      *(undefined4 *)(param_1 + 0x48) = uVar3;
    }
    else {
      uVar3 = FUN_004048b8();
      uVar4 = FUN_004048b8();
      uVar3 = FUN_00514868(uVar4,uVar3);
      *(undefined4 *)(param_1 + 0x48) = uVar3;
    }
  }
  return;
}
