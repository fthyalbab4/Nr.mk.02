// rea decompile_all
// name: FUN_005b43d4
// address: 0x5b43d4
// body: available
// range: 0x5b43d4-0x5b45b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005b43d4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;

  iVar1 = FUN_00701c28(&DAT_00700d94,1,param_1,param_2);
  FUN_005b4334(iVar1,0,0xff,0);
  FUN_005b4334(iVar1,1,0x40,0);
  FUN_005b4334(iVar1,2,0x80,0);
  FUN_005b4334(iVar1,3,0xc0,0);
  FUN_005b4334(iVar1,4,0xff,0x40);
  FUN_005b4334(iVar1,5,0xff,0x80);
  FUN_005b4334(iVar1,6,0xff,0xc0);
  FUN_005b42bc(iVar1,7,0,0,0,0);
  FUN_005b42bc(iVar1,7,1,0x20,0x20,0x20);
  FUN_005b42bc(iVar1,7,2,0x40,0x40,0x40);
  FUN_005b42bc(iVar1,7,3,0x80,0x80,0x80);
  FUN_005b42bc(iVar1,7,4,0xc0,0xc0,0xc0);
  FUN_005b42bc(iVar1,7,5,0xff,0xff,0xff);
  iVar6 = 0;
  do {
    iVar2 = *(int *)(iVar1 + 4) / 0xff + 1;
    uVar3 = FUN_00404878(iVar2,*(int *)(iVar1 + 4) % 0xff,0xff,iVar2);
    uVar4 = FUN_005a562c(iVar6,iVar6,iVar6,0xff);
    uVar7 = 0;
    uVar5 = FUN_00404878();
    FUN_007028d0(iVar1,(*(int *)(iVar1 + 4) * iVar6) / 0xff,uVar5,uVar7,uVar4,uVar3,iVar2);
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x100);
  return iVar1;
}
