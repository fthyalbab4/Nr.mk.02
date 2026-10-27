// rea decompile_all
// name: FUN_004f02ac
// address: 0x4f02ac
// body: available
// range: 0x4f02ac-0x4f03c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f02ac(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;

  puVar6 = &LAB_004f0038;
  puVar5 = &LAB_004f004c;
  iVar3 = param_1;
  iVar4 = param_1;
  uVar2 = FUN_004f0058();
  (**(code **)(*param_2 + 4))(param_2,L"IsControl",uVar2,puVar5,iVar3,puVar6,iVar4);
  puVar6 = &LAB_004f19c8;
  puVar5 = &LAB_004f1960;
  iVar3 = param_1;
  iVar4 = param_1;
  if ((*(byte *)(param_1 + 0x1c) & 2) == 0) {
    cVar1 = FUN_004f008c(0);
    if (cVar1 == '\0') goto LAB_004f0308;
    uVar2 = 1;
  }
  else {
LAB_004f0308:
    uVar2 = 0;
  }
  (**(code **)(*param_2 + 4))(param_2,L"ExplicitLeft",uVar2,puVar5,iVar3,puVar6,iVar4);
  puVar6 = &LAB_004f1998;
  puVar5 = &LAB_004f1940;
  iVar3 = param_1;
  iVar4 = param_1;
  if ((*(byte *)(param_1 + 0x1c) & 2) == 0) {
    cVar1 = FUN_004f008c(1);
    if (cVar1 == '\0') goto LAB_004f0340;
    uVar2 = 1;
  }
  else {
LAB_004f0340:
    uVar2 = 0;
  }
  (**(code **)(*param_2 + 4))(param_2,L"ExplicitTop",uVar2,puVar5,iVar3,puVar6,iVar4);
  puVar6 = &LAB_004f1970;
  puVar5 = &LAB_004f1988;
  iVar3 = param_1;
  iVar4 = param_1;
  if ((*(byte *)(param_1 + 0x1c) & 2) == 0) {
    cVar1 = FUN_004f008c(2);
    if (cVar1 == '\0') goto LAB_004f0378;
    uVar2 = 1;
  }
  else {
LAB_004f0378:
    uVar2 = 0;
  }
  (**(code **)(*param_2 + 4))(param_2,L"ExplicitWidth",uVar2,puVar5,iVar3,puVar6,iVar4);
  puVar6 = &LAB_004f19b0;
  puVar5 = &LAB_004f1950;
  iVar3 = param_1;
  if ((*(byte *)(param_1 + 0x1c) & 2) == 0) {
    cVar1 = FUN_004f008c(3);
    if (cVar1 != '\0') {
      uVar2 = CONCAT31((int3)((uint)&stack0xfffffffc >> 8),1);
      goto LAB_004f03b6;
    }
  }
  uVar2 = 0;
LAB_004f03b6:
  (**(code **)(*param_2 + 4))(param_2,L"ExplicitHeight",uVar2,puVar5,param_1,puVar6,iVar3);
  return;
}
