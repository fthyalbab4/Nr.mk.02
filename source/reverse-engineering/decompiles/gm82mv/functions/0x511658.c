// rea decompile_all
// name: FUN_00511658
// address: 0x511658
// body: available
// range: 0x511658-0x51182e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00511658(undefined4 param_1)

{
  LPVOID *ppvVar1;
  uint uVar2;
  undefined4 unaff_EBX;

  if (DAT_0068fda8 == '\0') {
    unaff_EBX = 0;
    DAT_006840b8 = (int *)0x0;
    FUN_0040b268(&DAT_006840ac);
    FUN_00409dfc(&DAT_0068fda0,&DAT_005113fc,1,0);
    DAT_006840b4 = 0;
    DAT_006840bc = 0;
    FUN_0040b268(&DAT_006840b0);
    if (DAT_006840b8 != (int *)0x0) {
      FUN_005118c0();
    }
    DAT_006840b8 = (int *)FUN_0050e82c(&PTR_LAB_0050d758,1,0);
    FUN_004bb578(DAT_006840b8,0);
    (**(code **)(*DAT_006840b8 + 0x78))(DAT_006840b8,param_1);
    DAT_006840bc = FUN_00484660(&PTR_FUN_00482a9c,1,0);
    FUN_004847fc(DAT_006840bc,0);
    FUN_00405fac(&DAT_0051147c,1);
    FUN_0048481c(DAT_006840bc);
    ppvVar1 = (LPVOID *)FUN_0040b268(&DAT_006840ac);
    uVar2 = CoCreateInstance((IID *)PTR_DAT_0068924c,(LPUNKNOWN)0x0,3,(IID *)&DAT_00511830,ppvVar1);
    if ((uVar2 & 0x80000000) == 0) {
      FUN_0040b268(&DAT_006840b0);
      ppvVar1 = (LPVOID *)FUN_0040b268(&DAT_006840b0);
      uVar2 = CoCreateInstance((IID *)PTR_DAT_00688a30,(LPUNKNOWN)0x0,3,(IID *)&DAT_005118b0,ppvVar1
                              );
      if ((uVar2 & 0x80000000) == 0) {
        FUN_004c45dc(param_1);
        uVar2 = (**(code **)(*DAT_006840ac + 0xb0))();
        if ((uVar2 & 0x80000000) == 0) {
          Sleep(200);
          unaff_EBX = 1;
        }
        else {
          FUN_004a17e4(&PTR_DAT_0051184c);
          DAT_0068fda8 = '\x01';
          FUN_0040b268(&DAT_006840ac);
          FUN_0040b268(&DAT_006840b0);
        }
      }
      else {
        FUN_004a17e4(&PTR_DAT_0051184c);
        DAT_0068fda8 = '\x01';
        FUN_0040b268(&DAT_006840ac);
        FUN_0040b268(&DAT_006840b0);
      }
    }
    else {
      FUN_004a17e4(&PTR_DAT_0051184c);
      DAT_0068fda8 = '\x01';
      FUN_0040b268(&DAT_006840ac);
    }
  }
  return unaff_EBX;
}
