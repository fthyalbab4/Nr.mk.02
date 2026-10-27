// rea decompile_all
// name: FUN_005f783f
// address: 0x5f783f
// body: available
// range: 0x5f783f-0x5f790f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unable to track spacebase fully for stack */

void FUN_005f783f(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short sVar6;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  int iVar8;
  undefined4 unaff_EDI;
  int iVar9;
  undefined2 in_SS;
  int iVar7;

  puVar2 = (undefined4 *)segment(in_SS,(short)&stack0xfffffffc + -4);
  *puVar2 = unaff_ESI;
  sVar6 = (short)&stack0xfffffffc + -8;
  iVar7 = CONCAT22((short)((uint)&stack0xfffffffc >> 0x10),sVar6);
  puVar2 = (undefined4 *)segment(in_SS,sVar6);
  *puVar2 = unaff_EDI;
  *(undefined4 *)(iVar7 + -4) = unaff_EBP;
  *(undefined4 *)(iVar7 + -8) = param_1;
  *(undefined4 *)(iVar7 + -0xc) = 0x5f784c;
  uVar4 = FUN_0050be9c();
  iVar8 = 0;
  do {
    *(undefined4 *)(iVar7 + -0xc) = 0x5f7855;
    uVar5 = FUN_0050bbe0(uVar4);
    *(undefined4 *)(iVar7 + -0xc) = uVar5;
    *(undefined4 *)(iVar7 + -0x10) = 0x5f786a;
    FUN_00409dfc(&DAT_0084f518 + iVar8,&DAT_005bd3dc,1);
    *(undefined4 *)(iVar7 + -0x10) = 0x5f787e;
    FUN_00409dfc(&DAT_0084f548 + iVar8,&DAT_005bd408,1);
    iVar3 = *(int *)(iVar7 + -0xc);
    for (iVar9 = 0; iVar9 != iVar3; iVar9 = iVar9 + 1) {
      *(undefined4 *)(iVar7 + -0xc) = 0x5f788c;
      uVar5 = FUN_0050bbe0(uVar4);
      *(undefined4 *)((&DAT_0084f548)[iVar8] + iVar9 * 4) = uVar5;
      *(undefined4 *)(iVar7 + -0xc) = uVar5;
      iVar1 = (&DAT_0084f518)[iVar8];
      *(undefined4 *)(iVar7 + -0x10) = 0x5f78ae;
      FUN_00409dfc(iVar1 + iVar9 * 4,&DAT_005bd3b0,1);
      iVar1 = *(int *)(iVar7 + -0xc);
      uVar5 = *(undefined4 *)((&DAT_0084f518)[iVar8] + iVar9 * 4);
      *(undefined4 *)(iVar7 + -0xc) = 0x5f78c3;
      FUN_0043ca88(uVar4,uVar5,iVar1 << 2);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0xc);
  *(undefined4 *)(iVar7 + -0xc) = 0x5f78d5;
  DAT_0068753c = FUN_0050bbe0(uVar4);
  *(undefined4 *)(iVar7 + -0xc) = DAT_0068753c;
  *(undefined4 *)(iVar7 + -0x10) = 0x5f78ed;
  FUN_00409dfc(&DAT_0084f578,&DAT_005bd474,1);
  uVar5 = DAT_0084f578;
  iVar8 = *(int *)(iVar7 + -0xc);
  *(undefined4 *)(iVar7 + -0xc) = 0x5f78fe;
  FUN_0043ca88(uVar4,uVar5,iVar8 << 3);
  *(undefined4 *)(iVar7 + -0xc) = 0x5f7905;
  FUN_00405fdc(uVar4);
  uVar4 = *(undefined4 *)(iVar7 + -8);
  *(undefined4 *)(iVar7 + -8) = 0x5f790b;
  FUN_00405fdc(uVar4);
  return;
}
